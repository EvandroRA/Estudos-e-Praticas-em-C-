#include <stdio.h>
#include <stdlib.h>

/*
5. Criar um programa que possa armazenar em uma matriz os nomes e as alturas de dez atletas de cinco delegacoes
 que participarao dos jogos de verao. Imprimir os nomes dos atletas mais altos de cada delegacao.
 obs:Utilize obrigatoriamente uma matriz de structs
*/

typedef struct {
    char nome[100];
    float altura;
} Atleta;

int main() {

    Atleta atletas[5][10];  
    int i, j;
    Atleta mais_alto;

    
    for (i = 0; i < 5; i++) {

        printf("Digite os dados dos 10 atletas da delegação %d:\n", i + 1);
        
        for (j = 0; j < 10; j++) {

            printf("Atleta %d - Nome: ", j + 1);
            scanf(" %[^\n]", atletas[i][j].nome);  
            printf("Atleta %d - Altura: ", j + 1);
            scanf("%f", &atletas[i][j].altura);  
        }
    }

    printf("\nAtletas mais altos de cada delegação:\n");

    for (i = 0; i < 5; i++) {

        mais_alto = atletas[i][0];  
        
        for (j = 1; j < 10; j++) {

            if (atletas[i][j].altura > mais_alto.altura) {
                mais_alto = atletas[i][j];  
            }
        }
        
        printf("Delegação %d: %s, Altura: %.2f metros\n", i + 1, mais_alto.nome, mais_alto.altura);
    }
    
    return 0;
}
