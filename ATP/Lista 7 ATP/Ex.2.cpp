#include <stdlib.h>
#include <stdio.h>

/* 2. Prepare um programa para ler um vetor com 200 numeros. Depois desta leitura voce deve calcular a media
 destes numeros. Seu programa devera informar a posicao e o valor de todos os numeros que caram acima desta
 media. */

int main() {

    float numero[500], somatorio = 0, media;
    int i;

    
    for (i = 0; i < 200; i++) {

        printf("Digite o %d numero \n", i + 1);
        scanf("%f", &numero[i]); 

        somatorio += numero[i];
    }

    media = somatorio/200;

    printf("A media foi de %0.2f", media);

    for (i = 0; i < 200; i++) {

        if (numero[i] > media) {

            printf("O numero de posicao %d e de valor igual a: %0.2f ficou acima da media de %0.2f \n", i, numero[i], media);
        
        }

    }


    return 0;
}
