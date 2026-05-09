#include <stdio.h>
#include <stdlib.h>

/*
 2. Prepare um programa para perguntar o nome e o sexo de 200 pessoas. Voce deve listar primeiro o nome de todas
 as mulheres e depois o nome de todos os homens.
 obs:Utilize obrigatoriamente um vetor de structs
*/

typedef struct {
    char nome[100];
    char sexo;
} Pessoa;

int main(){

    Pessoa pessoas[200]; 
    int i;

    
    for (i = 0; i < 200; i++) {
        printf("Digite o nome da %dª pessoa: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);  // Captura o nome
        printf("Digite o sexo de %s (M para masculino, F para feminino): ", pessoas[i].nome);
        scanf(" %c", &pessoas[i].sexo);     // Captura o sexo
    }

    
    printf("\nMulheres:\n");
    for (i = 0; i < 200; i++) {
        if (pessoas[i].sexo == 'F' || pessoas[i].sexo == 'f') {
            printf("%s\n", pessoas[i].nome);  
        }
    }

    
    printf("\nHomens:\n");
    for (i = 0; i < 200; i++) {
        if (pessoas[i].sexo == 'M' || pessoas[i].sexo == 'm') {
            printf("%s\n", pessoas[i].nome);  
        }
    }

    return 0;
}


