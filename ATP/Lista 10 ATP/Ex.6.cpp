#include <stdio.h>
#include <stdlib.h>

/*
6. Faca uma funcao que receba um numero e retorne se este numero e primo.
   No caso positivo, a funcao retorna 1; caso contrario, retorna 0.
   Escreva tambem um programa principal para testar a funcao e imprimir
   dois valores: o retorno (1 ou 0) e a mensagem.
*/

int verificarPrimo(int numero) {

    if (numero <= 1) {
        return 0; // numeros <= 1 nao sao primos
    }
    for (int i = 2; i < numero; i++) {

        if (numero % i == 0) {
            return 0; // Nao e primo
        }
    }
    return 1; // E primo
}

int main() {

    int numero, resultado; 
   
    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = verificarPrimo(numero);

    
    printf("%d\n", resultado);

    
    if (resultado) { // se retorna 1
        printf("E primo\n");
    } else {
        printf("Nao e primo\n"); // se nao retorna 1
    }

    return 0;
}
