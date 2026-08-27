#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calcularPotencia(int a, int b){

    if (b==0){

        return 1;
    }

    return a * calcularPotencia(a,b-1);

}

int main(){

    int a,b,resultado;

    printf("Calculador de Potencia!\n");

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a==0){

        printf("A deve ser diferente de 0");
    }

    if (b<0){

        printf("B nao pode ser menor que 0");
    }

    resultado = calcularPotencia(a,b);

    printf("Resultado: %d", resultado);


    return 0;
}