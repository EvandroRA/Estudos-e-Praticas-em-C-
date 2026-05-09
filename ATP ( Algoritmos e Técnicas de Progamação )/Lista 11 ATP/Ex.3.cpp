#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*
3. Implemente uma funcao que receba como parametro um vetor de numeros inteiros e inverta a ordem dos elementos
 armazenados nesse vetor.
*/

using namespace std;

void inverterVetor(int vetor[], int tamanho) {

    for (int i = 0; i < tamanho / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }

}

void imprimirVetor(int vetor[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {

        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int numeros[] = {1, 2, 3, 4, 5, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Vetor original: ";
    imprimirVetor(numeros, tamanho);

    inverterVetor(numeros, tamanho);

    cout << "Vetor invertido: ";
    imprimirVetor(numeros, tamanho);

    return 0;
}
