#include <stdio.h>
#include <stdlib.h>

/*
5. Escreva uma fun¸c˜ao que receba dois n´umeros inteiros x e y. Essa funcao deve verificar se x ´e divis´ıvel por y. No
caso positivo, a fun¸c˜ao deve retornar 1, caso contr´ario zero. Escreva tamb´em um programa principal para testar
tal funcao.
*/


int ehDivisivel(int x, int y) {
    if (y == 0) {

        return 0; // evitar divisão por zero
    }

    return (x % y == 0) ? 1 : 0;
}

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if (ehDivisivel(x, y)) {
        printf("%d é divisível por %d.\n", x, y);
    } else {
        printf("%d não é divisível por %d.\n", x, y);
    }

    return 0;
}
