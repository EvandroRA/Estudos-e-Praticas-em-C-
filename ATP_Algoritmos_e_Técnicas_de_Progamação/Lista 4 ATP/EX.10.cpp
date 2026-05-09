#include <stdio.h>
#include <stdlib.h>

/* 10. Faca a multiplicacao entre dois numeros usando somente soma.(Utilizar a estrutura de repeticao for) */

int num1, num2, resultado = 0;

int main() {


    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    for (int i = 1; i <= num2; i++) { // Vai somar ate chegar ao valor resultado da multiplicaçao
        resultado += num1;
    }

    printf("A multiplicacao de %d e %d e: %d\n", num1, num2, resultado);
    
    return 0;
}
