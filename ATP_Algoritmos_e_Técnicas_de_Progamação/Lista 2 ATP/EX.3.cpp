#include<stdio.h>
#include<stdlib.h>

/* 
3. Faça um Programa que verifique se uma letra digitada e "F" ou "M". Conforme a letra
escrever: F - Feminino, M - Masculino, Sexo Invalido. Obs.: O programa deve funcionar para
letras maiusculas e minusculas.
*/

char Sexo;

int main(){
	
	printf("Digite a letra referente ao seu sexo! \n");
	printf("(F ou f) para feminino e (M ou m) para masculino \n");
	scanf("%c",&Sexo);
	
	if ( Sexo == 'M' || Sexo == 'm'){
		
		printf("\n Sexo Masculino");
	}
	else if ( Sexo == 'F' || Sexo == 'f'){
		
		printf("\n Sexo Feminino");
	}
	else {
		
		printf("\n Sexo invalido");
		
	}
	
	
return 0;

}