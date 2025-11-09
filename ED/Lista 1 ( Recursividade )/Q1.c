#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y) {
    if (y == 0)
        return 1; 
    else
        return x * potencia(x, y - 1); 
}

int main() {
    
    int x, y;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &x, &y);

    printf("%d^%d = %d\n", x, y, potencia(x, y));
    return 0;
}
