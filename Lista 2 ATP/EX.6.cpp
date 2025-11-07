#include <stdio.h>
#include <stdlib.h>

/* 
 6. Escreva um programa que receba um numero e imprima se o numero e ou nao e multiplo de 3
*/

int Numero;
float teste;

int main(){
	
	printf("Digite um valor \n");
	scanf("%d",&Numero);
	
	teste = Numero % 3;
	
	if ( teste != 0){
		
		printf("Nao e multiplo de 3");
		
	}
	else {	
	
		printf("E multiplo de 3");
		
	}	
	
	
	return 0;
}