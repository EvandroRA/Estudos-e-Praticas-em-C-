#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void escreverVetor(int vetor[20]){

    printf("Digite 10 numeros pares e 10 numeros impares de forma que eles fiquem misturados.");

    for (int i = 0; i < 20; i++){

        printf("\n");
        printf("Digite a Posicao [%d]: ",i);
        scanf("%d",&vetor[i]);
    }

}

void organizarVetor(int vetor[20]){

    int i = 0;
    int j = 1;
    int temporario;

    while (i < 20 && j < 20){

        while(i < 20 && vetor[i] % 2 != 0){ // Procura os Pares em casas Pares

            i += 2;
        }

         while(j < 20 && vetor[j] % 2 == 0){ // Procura os Impares em casas Impares

            j += 2;
        }

        if (i < 20 && j < 20){

            temporario = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temporario;

            i += 2;
            j += 2;
        }

    }

}

int main(){

    int vetor[20];

    escreverVetor(vetor);
    organizarVetor(vetor);

    printf("Vetor Organizado (Numero Par no Vetor Impar e Vice-Versa)");

    for(int i = -1; i < 20; i++){

        printf("Vetor[%d]: %d \n",i,vetor[i]);

    }

    return 0;
}