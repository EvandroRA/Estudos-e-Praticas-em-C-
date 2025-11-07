#include <stdio.h>
#include <stdlib.h>

// 2. Refaca o programa anterior para 100 numeros.(Utilizar a estrutura de repeticao while)

int numero, soma = 0;

int main() {
	
    int i = 1;
    
    while (i <= 100) {
    	
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
        soma += numero;
        i++;
        
    }
    
    printf("A soma total dos numeros e: %d\n", soma);
    
    return 0;
}
