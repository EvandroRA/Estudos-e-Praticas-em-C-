#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int vetor[20]){

    for(int i=0; i<20; i++){


        vetor[i] = (rand() % 6) + 2;
    }

}

int eComposto(int n){

    if(n <= 1){

        return 0;
    }

    for(int i=2; i<=(n/2); i++){

        if(n % i == 0){

            return 1;
        } 
    
    }

    return 0;
}

void organizarVetor(int  vetor[20], int esquerda, int direita){

    if (esquerda >= direita){
        return 0;
    }

    if (eComposto(vetor[esquerda])==1){

        organizarVetor(vetor,esquerda + 1,direita);
    }

    else if (eComposto(vetor[direita])==0){

        organizarVetor(vetor,esquerda,direita - 1);
    }

    else {

    int temporario = vetor[esquerda];
    vetor[esquerda] = vetor[direita];
    vetor[direita] = temporario;
    organizarVetor(vetor,esquerda + 1, direita -1);


    }



}

int main(){

    int vetor[20];

    preencherVetor(vetor);

    for(int i=0; i<20; i++){

        printf(" %d ",vetor[i]);

    }

    organizarVetor(vetor,0,19);
    
    printf("\n");

    for(int i=0; i<20; i++){

        printf("%d ",vetor[i]);

    }


    return 0;
}