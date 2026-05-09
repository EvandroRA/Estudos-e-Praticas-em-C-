#include <stdio.h>
#include <stdlib.h>

/*
7. Criar uma funcao que calcule e retorne o valor do fatorial de um numero.
A funcao deve retornar -1 caso seja passado um numero negativo.
Escreva tambem um programa para testar a funcao.
*/

int fazerFatorial(int numero) {

    int fatorial = 1;

    if (numero < 0) {
        return -1;
    }
    else {
        for (int i = 1; i <= numero; i++) {
            fatorial = fatorial * i;
        }
        return fatorial;
    }
}

int main() {

    int numero;
    int fatorial;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    fatorial = fazerFatorial(numero);

    printf("%d\n", fatorial);

    if (fatorial == -1) {
        printf("Numero invalido\n");
    } else {
        printf("Fatorial calculado com sucesso\n");
    }

    return 0;
}
