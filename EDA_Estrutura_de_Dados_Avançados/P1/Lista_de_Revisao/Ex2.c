#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerarMatriz (int matriz[4][4]){

    for (int i = 0; i < 4; i++){

        for (int j = 0; j < 4; j++ ){

           matriz[i][j] = (rand() % 30);  // 0 ate 29
        }
    }
}

void matrizTransposta (int matriz[4][4], int matrizT[4][4]){

    for (int i = 0; i < 4; i++){

        for (int j = 0; j < 4; j++ ){

           matrizT[j][i] = matriz[i][j];
        }
    }
}

void multiplicacaoMatriz (int matriz[4][4], int matrizT[4][4],int matrizM[4][4]){

    for (int i = 0; i < 4; i++){

        for (int j = 0; j < 4; j++ ){

            matrizM[i][j] = 0;

            for (int k = 0; k < 4; k++ ){

            matrizM[i][j] += matriz[i][k] * matrizT[k][j];
            }
        }

    }
}

int resultadoOrtogonal (int matrizM[4][4]){

    for (int i = 0; i < 4; i++){

        for (int j = 0; j < 4; j++ ){

           if (i == j && matrizM[i][j] != 1){

            return 0;
           }
           if (i != j && matrizM[i][j] != 0){

            return 0;
           }

        }
    }

    return 1;

}

int main(){

    int matrizM[4][4];
    int Transposta[4][4];
    int Multiplicacao[4][4];

    srand(time(NULL));

    gerarMatriz(matrizM);
    matrizTransposta(matrizM,Transposta);
    multiplicacaoMatriz(matrizM,Transposta,Multiplicacao);

    if (resultadoOrtogonal(Multiplicacao) == 1){

        printf("A Matriz M e ORTOGONAL");
    }
    else {

        printf("A Matriz M nao e ORTOGONAL");
    }

    return 0;

}