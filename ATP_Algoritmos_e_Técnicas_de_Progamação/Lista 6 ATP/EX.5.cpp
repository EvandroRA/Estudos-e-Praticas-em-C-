#include <stdio.h>
#include <string.h>

/*  5- Faca um programa que leia 2 strings e informe o conteudo delas seguido do seu comprimento. Informe tambem
 se as duas strings possuem o mesmo comprimento e sao iguais ou diferentes no conteudo. */

int main() {
	
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    
    printf("Conteudo da primeira string: %s, Comprimento: %lu\n", string1, strlen(string1));
    printf("Conteudo da segunda string: %s, Comprimento: %lu\n", string2, strlen(string2));

    if (strlen(string1) == strlen(string2)) {
        printf("As strings possuem o mesmo comprimento.\n");
        if (strcmp(string1, string2) == 0) {
            printf("As strings sao iguais no conteudo.\n");
        } else {
            printf("As strings sao diferentes no conteudo.\n");
        }
    } else {
        printf("As strings possuem comprimentos diferentes.\n");
    }

    return 0;
}
