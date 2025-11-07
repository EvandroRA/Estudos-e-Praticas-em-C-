#include <stdio.h>
#include <stdlib.h>

/*  4. Construa um algoritmo para calcular a media de valores PARES e IMPARES, que serao digitados pelo usuario.
    Ao final o algoritmo deve mostrar estas duas medias. O algoritmo deve mostrar tambem o maior numero PAR
    digitado e o menor numero IMPAR digitado. Para finalizar o usuario ira digitar um valor negativo. */

int main() {
	
    int numeroDigitado, somaPares = 0, somaImpares = 0;
    int contadorPares = 0, contadorImpares = 0;
    int maiorPar = -1, menorImpar = -1;

    printf("Bem vindo ao algoritmo para calcular a media de valores PARES e IMPARE (utilize algum valor negativo para sair):\n");

    while (1) 
	{
        printf("Digite um numero: ");
        scanf("%d", &numeroDigitado);

        if (numeroDigitado < 0) {
            break;
        }

        if (numeroDigitado % 2 == 0) { // Número par
            somaPares += numeroDigitado;
            contadorPares++;
            if (numeroDigitado > maiorPar || maiorPar == -1) {
                maiorPar = numeroDigitado;
            }
        } else { // Número ímpar
            somaImpares += numeroDigitado;
            contadorImpares++;
            if (numeroDigitado < menorImpar || menorImpar == -1) {
                menorImpar = numeroDigitado;
            }
        }
    }

    if (contadorPares > 0) {
    	
        printf("\nMedia dos numeros pares: %.2f\n", (float)somaPares / contadorPares);
        printf("\nMaior numero par: %d\n", maiorPar);
    } 
    
	else {
		
        printf("\nNenhum numero par foi digitado.\n");
        
    }

    if (contadorImpares > 0) {
    	
        printf("\nMedia dos numeros impares: %.2f\n", (float)somaImpares / contadorImpares);
        printf("\nMenor numero impar: %d\n", menorImpar);
        
    } 
	
	else {
		
        printf("\nNenhum numero impar foi digitado.\n");
        
    }

    return 0;
}
	
   	
   