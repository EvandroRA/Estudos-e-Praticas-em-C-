#include <stdio.h>
#include <stdlib.h>

// 3. Prepare um programa para somar os numeros compreendidos entre 1 e 1000. (Utilizar a estrutura de repeticao for)

int soma = 0;

int main() {
	
    for (int i = 1; i <= 1000; i++) {
        soma += i;
    }
    
    printf("A soma total dos numeros de 1 a 1000 e: %d\n", soma);
    
    return 0;
}

