#include <stdlib.h>
#include <stdio.h>

/* 3. Ler um vetor com 50 numeros. Informar a posicao em que esta o maior numero. Se o maior numero existir mais
 de uma vez, informe todas as posicoes onde existir este numero */

int main() {

    float numero[50];  
    int i, maior_posicoes[50], maior_posicao = 0, count = 0;
    float maior = -9999999999.0f; // Usando o menor valor possível para float
   

    for (i = 0; i < 50; i++) {

        printf("Digite o %d número: ", i + 1);
        scanf("%f", &numero[i]);

    }

   
    for (i = 0; i < 50; i++) {

        if (numero[i] > maior) {

            maior = numero[i];  
            maior_posicao = i;  
            count = 1;  
            maior_posicoes[0] = i;  
        } 
        else if (numero[i] == maior) {

            maior_posicoes[count] = i;  
            count++;  
        }

    }

   
    printf("\nO maior número é %.2f e aparece nas posições: ", maior);

    for (i = 0; i < count; i++) {

        printf("%d ", maior_posicoes[i]);

    }


    return 0;
}
