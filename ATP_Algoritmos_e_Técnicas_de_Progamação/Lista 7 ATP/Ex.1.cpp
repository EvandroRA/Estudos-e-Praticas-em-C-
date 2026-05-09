#include <stdlib.h>
#include <stdio.h>

/* 1. Prepare um programa para ler o nome de 50 pessoas e listá-los na ordem inversa de entrada */

int main() {

    char nome[50][100]; 
    int i, j;

    
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa");
        scanf(" %99[^\n]", nome[i]); //  Lê até 99 caracteres, parando apenas ao encontrar \n (nova linha).
    }

    
    for (j = 4; j >= 0; j--) {
        printf("%s\n", nome[j]);
    }

    return 0;
}
