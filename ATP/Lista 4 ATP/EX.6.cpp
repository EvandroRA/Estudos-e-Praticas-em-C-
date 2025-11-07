#include <stdio.h>
#include <stdlib.h>

/* 6. Criar um programa que leia os limites inferior e superior de um intervalo e imprima todos os numeros
pares no intervalo aberto e seu somatorio.Suponha que os dados digitados sao para um intervalo crescente,
ou seja, o primeiro valor e menor que o segundo. */

int inferior, superior, soma = 0;

int main() {
	
	
    printf("Digite o limite inferior: ");
    scanf("%d", &inferior);
    printf("Digite o limite superior: ");
    scanf("%d", &superior);

    if (inferior % 2 != 0) {
        inferior++;
    }

    printf("Numeros pares no intervalo aberto %d, %d:\n", inferior, superior);
    
    while (inferior < superior) {
        printf("%d ", inferior);
        soma += inferior;
        inferior += 2;
    }

    printf("\nA soma dos numeros pares e: %d\n", soma);
    
    return 0;
}
