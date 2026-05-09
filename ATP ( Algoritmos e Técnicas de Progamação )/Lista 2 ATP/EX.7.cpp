#include <stdio.h>
#include <stdlib.h>

/* 
 7. Construa um programa que indique se um numero digitado esta compreendido no intervalo aberto de 0 a 100 (0
 e 100 nao estao na faixa de valores).
*/

float Numero, teste;

int main(){
	
	printf("Digite um valor \n");
	scanf("%f",&Numero);
	
	if (Numero > 0 && Numero < 100) {
		
		printf("Esta na faixa de valores");
		
	}
	else {
		
		printf("Nao esta na faixa de valores");
		
	}
	
	return 0;
}