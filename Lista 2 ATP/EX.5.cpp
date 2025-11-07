#include <stdio.h>
#include <stdlib.h>

/* 
 5. Construa um programa que determine (imprima) se um dado numero N inteiro (recebido atraves do teclado) e PAR ou IMPAR.
*/

int Numero;
float teste;

int main(){
	
	printf("Digite um valor \n");
	scanf("%d",&Numero);
	
	teste = Numero % 2;
	
	if ( teste != 0){
		
		printf("E um numero impar");
		
	}
	else {	
	
		printf("E um numero par");
		
	}	
	
	
	return 0;
}