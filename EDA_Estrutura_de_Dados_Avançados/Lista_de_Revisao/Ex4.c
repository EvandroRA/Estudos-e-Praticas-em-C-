#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vetor[30]){

    for (int i=0; i<30; i++){

        vetor[i] = (rand() % 30) + 1;
    }


}

void ordenarVetor(int vetor[30]){

    int temporario;

    for (int i=0; i<30; i++){

        for (int j=0; j<29; j++){

            if (vetor[j] < vetor[j + 1]){

                temporario = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temporario;


            }
        }
    }
}

void imprimirVetor(int vetor[30]){

    for (int i=0; i<30; i++){

        printf("%d ", vetor[i]);

    }
    
    printf("\n");

}

int main(){

    int vetor[30];
    srand(time(NULL));

    preencherVetor(vetor);

    printf("Vetor Inicial");
    imprimirVetor(vetor);

    ordenarVetor(vetor);

    printf("Vetor Ordenado");
    imprimirVetor(vetor);

    
    return 0;
}