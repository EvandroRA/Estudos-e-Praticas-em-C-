#include <stdio.h>
#include <stdlib.h>

/*   7. Prepare um algoritmo para perguntar 40 numeros e informar o maior e o menor numero lido */

int main() {
	
    int numero, contador = 0, maiorNumero, menorNumero;
    
    while (contador != 40){
    	
    printf("Digite um numero:  ");
    scanf("%d", &numero);
    	
    if (contador == 0) {
    	
    	maiorNumero = numero;
    	menorNumero = numero;
    	
	}
    else {
    	
    	if (numero > maiorNumero){
    		
    		maiorNumero = numero;
		}
		if (numero < menorNumero){
			
			menorNumero = numero;
		}
    	
	}
   	
    contador++;
    	
	}
	
	printf("O maior numero e: %d \n",maiorNumero);
	printf("O menor numero e: %d \n",menorNumero);
   
    return 0;
}
