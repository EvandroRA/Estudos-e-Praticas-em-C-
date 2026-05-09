#include <stdio.h>
#include <stdlib.h>

/* 8. Se tivermos uma lista dos numeros naturais menores do que 10 que sao multiplos de 3 ou 5 obtemos 3,
5, 6 e 9. A soma destes multiplos e 23. Imprima a soma dos multiplos de 3 ou 5 menores do que 1000.
(Utilizar a estrutura de repeticao while) */

int soma = 0;

int main() {
	
	
    int i = 1;

    while (i < 1000) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
        i++;
    }

    printf("A soma dos multiplos de 3 ou 5 menores do que 1000 e: %d\n", soma);
    
    return 0;
}
