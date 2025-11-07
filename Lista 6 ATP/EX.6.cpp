#include <stdio.h>
#include <string.h>

/* 
 6- Faca um programa que solicite o nome do usuario e imprima o na vertical.
 Ex:
 F
 U
 L
 A
 N
 O */

int main() {
	
    char nome[100];

    printf("Digite seu nome: ");
    scanf("%s", nome); 

    for (int i = 0; i < strlen(nome); i++) {
        printf("%c\n", nome[i]); // se nome = "ATP", ent�o: nome[0] ser� 'A'

    }

    return 0;
}
