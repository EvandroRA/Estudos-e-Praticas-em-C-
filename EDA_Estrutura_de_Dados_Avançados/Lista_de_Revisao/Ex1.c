#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4
#define M 5

void gerarMatriz(int matriz[N][M]){

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){

            matriz[i][j] = (rand() % 20) + 1; // 1 ate 20

        }
    }
}

int verificarCondicao(int matriz[N][M]){

int soma, multiplicao;
int minSoma, maxMultiplicacao;

// Lado Esquerdo

for (int j = 0; j < M; j++){
    soma = 0;
    
    for (int i = 0; i < N; i++){

        soma += matriz[i][j];
    }

    if (j==0) {

        minSoma = soma;
    }
    else if (soma < minSoma){

        minSoma = soma;
    }

}

// Lado Direito

for (int i = 0; i < N; i++){
    multiplicao = 1;

    for (int j = 0; j < M; j++){

        multiplicao *= matriz[i][j];
    }
    
     if (i==0) {

        maxMultiplicacao = multiplicao;
    }
    else if (multiplicao > maxMultiplicacao){

        maxMultiplicacao = multiplicao;
    } 
}

// Verificação Final

    if (minSoma <= maxMultiplicacao){
        
        return 1;
    }
    else {

        return 0;
    }

}


int main() {

    int matrizA[N][M];

    srand(time(NULL));

    gerarMatriz(matrizA);

    if (verificarCondicao(matrizA) == 1){

        printf("Condicao Satisfeita");
    }
    else {

        printf("Condicao Nao Satisfeita");
    }

    return 0;
}






