#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    if (b == 0)
        return a; 
    else
        return mdc(b, a % b); 
}

int main() {

    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    return 0;
}
