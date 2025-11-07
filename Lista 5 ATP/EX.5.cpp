#include <stdio.h>
#include <stdlib.h>

/* 5- Escreva um algoritmo para calcular o fatorial do numero N, cujo valor e obtido atraves do usuario pelo teclado. */

int main() {
    int numero, fatorial = 1, contador;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
    	
        printf("Nao existe fatorial de numero negativo.\n");
        
    }

    contador = numero;

    while (contador > 1) {
    	
        fatorial *= contador; // igual  a fatorial = fatorial * contador; Servindo para fazer de cima para baixo Ex: 3!  3x1 = 3, 3x2 = 6;
        contador--;
        
    }

    printf("O fatorial de %d e: %d\n", numero, fatorial);
   
    return 0;
}
