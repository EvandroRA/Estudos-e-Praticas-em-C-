#include <stdio.h>
#include <stdlib.h>

/* 9. Escreva um programa que receba numeros do usuario enquanto eles forem positivos. No final o programa
deve imprimir quantos numeros foram digitados */

int numero, contador = 0;

int main() {

    printf("Digite numeros positivos. Para encerrar, digite um numero negativo.\n");

    while (1) { // "O while (1)" cria um loop infinito que só é interrompido quando a condição break é atendida. 
    	
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        contador++;
    }

    printf("Voce digitou %d numeros positivos.\n", contador);
    
    return 0;
}
