#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*
 2. Implemente uma funcao que receba como parametro um vetor de numeros reais e retorne quantos numeros
 negativos estao armazenados nesse vetor.
*/

using namespace std;

int contarNegativos(double vetor[], int tamanho) {

    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < 0) {
            contador++;
        }
    }
    return contador;
}

int main() {

    double numeros[] = {3.5, -2.1, 0.0, -7.4, 8.9, -1.0};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int negativos = contarNegativos(numeros, tamanho);

    cout << "Quantidade de numeros negativos: " << negativos << endl;

    return 0;
    
}
