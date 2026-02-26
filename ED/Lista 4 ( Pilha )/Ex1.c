#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // Para a função sleep()
#include "fila.c"

// Função para limpar o buffer do teclado e evitar erros no scanf/fgets
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função de Cadastro - Segue os requisitos das páginas 2 e 3 do trabalho
void cadastrarCliente(Fila *fila, char *tipoFila) {
    char nome[50];
    char continuar;

    do {
        // Bloqueia o cadastro se a fila atingir 5 clientes
        if (isFull(fila)) {
            printf("\n--- TELA DE CADASTRO ---\n");
            printf("Cadastro Bloqueado\nLimite de clientes alcancado.\n");
            return;
        }

        printf("\n--- TELA DE CADASTRO (%s) ---\n", tipoFila);
        printf("Nome do cliente: ");
        fgets(nome, 50, stdin);
        nome[strcspn(nome, "\n")] = 0; // Remove o \n do final da string

        // Validação de nome em branco
        if (strlen(nome) == 0) {
            printf("Erro: O programa nao permite nomes em branco.\n");
            continue;
        }

        inserirCliente(fila, nome);

        printf("Incluir novo cliente (s/n)? ");
        scanf(" %c", &continuar);
        limparBuffer();

    } while (continuar == 's' || continuar == 'S');
}

// Função de Atendimento - Implementa a regra de 2 Normais para 1 Prioridade
void liberarAtendimento(Fila *normal, Fila *prioridade) {
    // Se ambas as filas estiverem vazias, emite a mensagem e volta ao menu
    if (isEmpty(normal) && isEmpty(prioridade)) {
        printf("\nSem clientes para atendimento\n");
        return;
    }

    char op;
    do {
        Cliente c;
        printf("\n--- TELA ATENDIMENTO LIBERADO ---\n");

        // 1. Atendimento da FILA NORMAL (Tenta liberar até 2 clientes)
        printf("Clientes Atendimento Comum\n");
        for (int i = 0; i < 2; i++) {
            if (removerCliente(normal, &c)) {
                printf("Atendimento ao cliente: %s\n", c.nome);
                sleep(5); // Delay de 5 segundos conforme requisito
            } else {
                printf("Sem clientes aguardando\n");
            }
        }

        // 2. Atendimento da FILA PRIORIDADE (Libera 1 cliente)
        printf("\nClientes Atendimento Prioridade\n");
        if (removerCliente(prioridade, &c)) {
            printf("Atendimento ao cliente: %s\n", c.nome);
            sleep(5); // Delay de 5 segundos conforme requisito
        } else {
            printf("Sem clientes aguardando\n");
        }

        // Se após o ciclo as filas acabarem, encerra a rotina automaticamente
        if (isEmpty(normal) && isEmpty(prioridade)) {
            printf("\nFim dos atendimentos. Retornando ao menu principal...\n");
            break;
        }

        printf("\nDeseja prosseguir(S/N)? ");
        scanf(" %c", &op);
        limparBuffer();

    } while (op == 'S' || op == 's');
}

int main() {
    // Inicialização das filas estática ou dinâmica
    Fila *filaPrioridade = criarFila();
    Fila *filaNormal = criarFila();
    int opcao = 0;

    while (opcao != 4) {
        printf("\n--- TELA DE MENU ---\n");
        printf("1. Cadastrar Atendimento Comum\n");
        printf("2. Cadastrar Prioridade\n");
        printf("3. Liberar Atendimento\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            limparBuffer();
            printf("Opcao invalida!\n");
            continue;
        }
        limparBuffer();

        switch (opcao) {
            case 1:
                cadastrarCliente(filaNormal, "NORMAL");
                break;
            case 2:
                cadastrarCliente(filaPrioridade, "PRIORIDADE");
                break;
            case 3:
                liberarAtendimento(filaNormal, filaPrioridade);
                break;
            case 4:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opcao inexistente!\n");
        }
    }

    return 0;
}