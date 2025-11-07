#include<stdio.h>
#include<stdlib.h>

/* 
 4. Faca um programa que veri que se uma letra digitada e vogal ou consoante.
*/

char Letra;

int main(){
	
	printf("Digite a letra! \n");
	scanf("%c",&Letra);
	
	if ( Letra == 'A' || Letra == 'E' || Letra == 'I' || Letra == 'O' || Letra == 'U' || Letra == 'a' || Letra == 'e' || Letra == 'i' || Letra == 'o' || Letra == 'u' ){
		
		printf("\n Esta letra e uma Vogal");
	}

	else {
		
		printf("\n Esta letra e uma Consoante");
		
	}
	
	
return 0;

}