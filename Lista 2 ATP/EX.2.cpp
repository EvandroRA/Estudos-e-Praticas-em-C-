#include <stdio.h>
#include <stdlib.h>

/* 
  2. Prepare um programa para perguntar dois numeros e informar qual deles e o maior ou se os numeros sao iguais
*/

float Valor1, Valor2;

int main(){
	
	printf("Digite o valor 1\n");
	scanf("%f",&Valor1);
	
	printf("Digite o valor 2\n");
	scanf("%f",&Valor2);
	
	if (Valor1 > Valor2){
		
		printf("O primeiro valor e maior");
		
	}
	else if (Valor1 < Valor2){
		
		printf("O  segundo valor  e maior");
		
	}
	else {
		
		printf("Os 2 numeros sao iguais");
		
	}
	
	
	return 0;
}