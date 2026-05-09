#include <stdio.h>
#include <stdlib.h>

/*
1. Faca uma funcao que necessite de tres argumentos, e que forneca a soma desses tres argumentos
*/

int somaTresNumeros(int a, int b, int c) {

    return a + b + c;

}

int main() {

    int num1 = 5, num2 = 10, num3 = 15;
    int resultado = somaTresNumeros(num1, num2, num3);

    printf("A soma de %d, %d e %d e: %d\n", num1, num2, num3, resultado);

    return 0;

}
