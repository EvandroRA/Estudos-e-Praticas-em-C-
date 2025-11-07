#include <stdio.h>
#include <stdlib.h>

/*
3. Fa¸ca uma fun¸c˜ao que retorne a multiplica¸c˜ao entre dois n´umeros usando somente soma.
*/


int multiplicarComSoma(int a, int b) {

    int resultado = 0;
    int positivo = 1;

    
    if (b < 0) {
        b = -b;
        positivo = -1;
    }

    for (int i = 0; i < b; i++) {
        resultado += a;
    }

    return resultado * positivo;
}


int main() {
    
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int resultado = multiplicarComSoma(num1, num2);
    printf("Resultado da multiplicação: %d\n", resultado);

    return 0;
    
}
