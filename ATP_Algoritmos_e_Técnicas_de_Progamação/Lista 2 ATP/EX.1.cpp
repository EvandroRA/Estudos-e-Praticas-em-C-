#include <stdio.h>
#include <stdlib.h>

/* 
  1. Faca um programa que peca um valor e mostre na tela se o valor e positivo, negativo ou nulo.
*/

float Valor;

int main(){
	
	printf("Digite um valor \n");
	scanf("%f",&Valor);
	
	if ( Valor == 0){
		
		printf("Este numero e nulo");
		
	}
	else if(Valor < 0){
		
		printf("Este numero e negativo");
		
	}
	else {
		
		printf("Este numero e positivo");
		
	}
	
	
	return 0;
}