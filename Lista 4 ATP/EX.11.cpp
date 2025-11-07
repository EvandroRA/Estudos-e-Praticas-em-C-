#include <stdio.h>
#include <stdlib.h>

/* 11. Prepare um programa para controlar as informacoes sobre utiliza¸cao de um banco eletronico. Seu programa
devera perguntar aos clientes qual foi a operacao que eles realizaram.
O programa devera mostrar um menu com as as seguintes opcoes:
1 - Deposito
2 - Retirada
3 - Saldo
4 - Extrato
5 - Sair do Programa
O programa dever´a ficar em loop, apresentando o menu e lendo a opcao do usu´ario. Apos lida a opcao de
sair do programa, informe quantas opera¸c˜oes foram efetuadas de cada tipo e finalize a execucao. (Utilizar
a estrutura de repeticao do...while e a estrutura de selecao switch...case) */

int operacao, deposito = 0, retirada = 0, saldo = 0, extrato = 0;
int total_operacoes = 0;


int main() {


    do {
        printf("\nMenu de Operacoes:\n");
        printf("1 - Deposito\n");
        printf("2 - Retirada\n");
        printf("3 - Saldo\n");
        printf("4 - Extrato\n");
        printf("5 - Sair do Programa\n");
        printf("Escolha a operacao: ");
        scanf("%d", &operacao);

        switch (operacao) {
        	
            case 1:
            	
                printf("Digite o valor do deposito: ");
                int valor_deposito;
                scanf("%d", &valor_deposito);
                saldo += valor_deposito;
                deposito++;
                total_operacoes++;
                break;

            case 2:
            	
                printf("Digite o valor da retirada: ");
                int valor_retirada;
                scanf("%d", &valor_retirada);
                if (valor_retirada <= saldo) {
                    saldo -= valor_retirada;
                    retirada++;
                    total_operacoes++;
                } else {
                    printf("Saldo insuficiente!\n");
                }
                break;

            case 3:
            	
                printf("Saldo atual: %d\n", saldo);
                break;

            case 4:
            	
                printf("Extrato: Saldo atual e %d\n", saldo);
                extrato++;
                total_operacoes++;
                break;

            case 5:
            	
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                
        }

    } while (operacao != 5);

    printf("\nTotal de operacoes realizadas:\n");
    
    printf("Depositos: %d\n", deposito);
    
    printf("Retiradas: %d\n", retirada);
    
    printf("Salvos: %d\n", saldo);
    
    printf("Extratos: %d\n", extrato);
    
    printf("Total de operacoes: %d\n", total_operacoes);

    return 0;
}
