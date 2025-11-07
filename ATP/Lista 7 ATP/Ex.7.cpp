#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[200][100]; 
    char sexo[200];       
    int i;

    
    for (i = 0; i < 200; i++) {

        printf("Digite o nome da %dª pessoa: ", i + 1);
        scanf(" %[^\n]", nome[i]); 
        printf("Digite o sexo de %s (M para masculino, F para feminino): ", nome[i]);
        scanf(" %c", &sexo[i]);     

    }

    
    printf("\nMulheres:\n");
    for (i = 0; i < 200; i++) {

        if (sexo[i] == 'F' || sexo[i] == 'f') {
            printf("%s\n", nome[i]);  // Exibe o nome da mulher
        }
    }

    
    printf("\nHomens:\n");

    for (i = 0; i < 200; i++) {
        
        if (sexo[i] == 'M' || sexo[i] == 'm') {
            printf("%s\n", nome[i]);  // Exibe o nome do homem
        }
    }

    return 0;
}
