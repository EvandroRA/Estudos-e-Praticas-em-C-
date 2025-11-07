#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*
 4. Faca uma funcao de nome encontrarMaior que recebe como entrada uma matriz inteira A5x5 e devolve tres
 inteiros: maiorValor, linhaDoMaiorValor e colunaDoMaiorValor.
*/
using namespace std;

void encontrarMaior(int matriz[5][5], int &maiorValor, int &linhaDoMaior, int &colunaDoMaior) {

    maiorValor = matriz[0][0];
    linhaDoMaior = 0;
    colunaDoMaior = 0;

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {

            if (matriz[i][j] > maiorValor) {

                maiorValor = matriz[i][j];
                linhaDoMaior = i;
                colunaDoMaior = j;
            }
        }
    }
}
int main() {

    int A[5][5] = {
        
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int maior, linha, coluna;

    encontrarMaior(A, maior, linha, coluna);

    cout << "Maior valor: " << maior << endl;
    cout << "Linha do maior: " << linha << endl;
    cout << "Coluna do maior: " << coluna << endl;

    return 0;
}
