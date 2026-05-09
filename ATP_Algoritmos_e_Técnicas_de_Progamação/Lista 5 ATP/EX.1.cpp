#include <stdio.h>
#include <stdlib.h>

/* 1. Escreva um algoritmo que leia 20 numeros e imprima a soma dos positivos e o total de numeros negativos. */

int main() {
	
    float numero, somaPositivos = 0;
    int contador = 0, totalNegativos = 0;

    while (contador < 20) {
    	
        printf("Digite o %d numero: ", contador + 1);
        scanf("%f", &numero);

        if (numero >= 0) {
        	
            somaPositivos += numero;  
            
        } 
		else {
        	
            totalNegativos++;  
            
        }

        contador++;  
    }

    printf("A soma dos numeros positivos e: %.2f\n", somaPositivos);
    printf("O total de numeros negativos e: %d\n", totalNegativos);

    return 0;
}
