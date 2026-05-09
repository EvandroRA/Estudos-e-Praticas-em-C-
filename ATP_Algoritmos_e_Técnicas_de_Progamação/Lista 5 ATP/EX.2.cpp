#include <stdio.h>
#include <stdlib.h>

/* 2. Escreva um algoritmo que receba numeros do usuario enquanto eles forem positivos. No final o algoritmo deve
 imprimir quantos numeros foram digitados. */

int main() {
	
    float numero = 0, somaPositivos = 0;
    int totalDeNumeros = 0;

    while (numero >= 0) {
    	
        printf("Digite o numero: ");
        scanf("%f", &numero);

        if (numero > 0) {
        	
            somaPositivos += numero;  
            
        } 
			
        totalDeNumeros++;  
          
    }

    printf("A soma dos numeros positivos e: %.2f\n", somaPositivos);
    printf("O total de numeros e: %d\n", totalDeNumeros);

    return 0;
}
