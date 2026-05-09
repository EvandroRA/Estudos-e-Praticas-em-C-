#include <stdio.h>
#include <stdlib.h>

/*
2. Fa¸ca um programa, com uma fun¸c˜ao que necessite de um argumento. A fun¸c˜ao retorna o valor de caractere ‘P’,
se seu argumento for positivo, e ‘N’, se seu argumento for zero ou negativo
*/


char verificaPositivoOuNegativo(int numero) {

    if (numero > 0) {

        return 'P';
    } 

    else {

        return 'N';
    }
}

int main() {

    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    char resultado = verificaPositivoOuNegativo(valor);
    printf("Resultado: %c\n", resultado);

    return 0;
}
