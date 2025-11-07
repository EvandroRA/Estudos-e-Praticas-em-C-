#include <stdio.h>
#include <stdlib.h>

/*
4. Criar um programa que possa armazenar em uma matriz as alturas de dez atletas de cinco delega¸c˜oes que
participar˜ao dos jogos de ver˜ao. Imprimir a maior altura de cada delega¸c˜ao.
*/


int main() {

    float alturas[5][10], maior;
    
    
    for (int i = 0; i < 5; i++) {

        printf("Digite as alturas dos 10 atletas da delegação %d:\n", i + 1);
        
        for (int j = 0; j < 10; j++) {

            printf("Atleta %d: ", j + 1);
            scanf("%f", &alturas[i][j]);
        }
    }
    
    printf("\nMaior altura de cada delegação:\n");

    for (int i = 0; i < 5; i++) {

        maior = alturas[i][0];

        for (int j = 1; j < 10; j++) {

            if (alturas[i][j] > maior) {
                maior = alturas[i][j];
                
            }
        }
        printf("Delegação %d: %.2f metros\n", i + 1, maior);
    }
    
    return 0;
}