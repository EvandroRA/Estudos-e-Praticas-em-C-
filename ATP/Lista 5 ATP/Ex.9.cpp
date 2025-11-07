#include <stdio.h>
#include <stdlib.h>

/*    9. Faca um algoritmo para simular uma situacao simples de deposito, retirada e consulta em um banco. O algoritmo
 inicialmente devera mostrar um menu com as seguintes opcoes:
 (a) Deposito
 (b) Retirada
 (c) Saldo
 (d) Sair do programa
 Se a escolha do usuario for deposito ou retirada, o algoritmo devera pedir o valor da operacao e atualizar
 automaticamente o valor existente na conta. O algoritmo devera ser utilizado ate que o usuario escolha a opcao
 sair do programa.
 Obs: Utilizar as estruturas de selecao multipla (switch...case) e de repeticao com condicional no fim. */


int main() {
	
    float deposito, saque, saldo = 0;
    char opcao;

    printf("Bem-vindo ao banco\n");
    do {
    	
        printf("\n\n");
        printf("[a] - Deposito\n");
        printf("[b] - Saque\n");
        printf("[c] - Saldo\n");
        printf("[d] - Sair do programa.\n");
        printf("Selecione a sua opcao: ");
        scanf(" %c", &opcao);

        switch(opcao) {
        	
            case 'a':
            case 'A':
                printf("Insira o valor de Deposito: ");
                scanf("%f", &deposito);
                if (deposito > 0) {
                    saldo += deposito;
                } else {
                    printf("Depósito não pode ser menor que 0\n");
                }
                break;
            case 'b':
            case 'B':
                printf("Insira o valor de Saque: ");
                scanf("%f", &saque);
                if (saque > 0) {
                    saldo -= saque;
                } else {
                    printf("Saque nao pode ser menor que 0\n");
                }
                break;
            case 'c':
            case 'C':
                printf("Saldo atual: %.2f\n", saldo);
                break;            
            case 'd':
            case 'D':
                printf("Encerrando operacoes.\n");
                break;
            default:
                printf("Opcao invalida!\n");    
        }
    } while (opcao != 'd' && opcao != 'D');

    return 0;
}


