#include <stdio.h>
#include <stdlib.h>

/*  6. Escreva um algoritmo que determine se um dado numero N (digitado pelo usuario) e primo ou nao */

int main() {
	
	float verificacao1, verificacao2;
    int numero;
    
    printf("Digite um numero:  ");
    scanf("%d", &numero);

    verificacao1 = numero % 2;
    verificacao2 = numero % 3;
    
    
    if (numero == 2 || numero == 3){
    	
    	printf("\nO numero %d e um numero primo",numero);
    	
	}
    else if (verificacao1 == 0 || verificacao2 == 0){
    	
    	printf("\nO numero %d nao e um numero primo",numero);
    	
	}
	else {
		
		printf("\nO numero %d e um numero primo",numero);
		
	}
   
    return 0;
}
