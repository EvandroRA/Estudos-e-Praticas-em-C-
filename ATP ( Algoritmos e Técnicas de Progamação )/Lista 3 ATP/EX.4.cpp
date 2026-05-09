#include <stdio.h>
#include <stdlib.h>

/* 
 4. Faca um programa que peca para entrar com um ano com 4 digitos e determine se o mesmo e ou nao bissexto.
 Obs. Resposta em: http://pt.wikipedia.org/wiki/Ano bissexto
*/

int Ano;

int main() {
    
    printf("Digite um ano com 4 digitos: ");
    scanf("%d", &Ano);

    if ((Ano % 4 == 0 && Ano % 100 != 0) || (Ano % 400 == 0)) {
        printf("O ano %d e bissexto.\n", Ano);
    } else {
        printf("O ano %d nao e bissexto.\n", Ano);
    }

    return 0;
	

    
}