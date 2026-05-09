#include <stdio.h>
#include <stdlib.h>

/* 8. Prepare um programa para ler dois vetores, um com o preco e o outro com a quantidade vendida de 500 produtos.
 Seu programa devera informar:
 (a) O valor arrecadado com cada produto
 (b) O valor total arrecadado */

int main() {

    float preco[500], quantidade[500], valor_arrecadado[500], total_arrecadado = 0;
    int i;

    
    for (i = 0; i < 500; i++) {
        printf("Digite o preco do %dº produto: ", i + 1);
        scanf("%f", &preco[i]);
        printf("Digite a quantidade vendida do %dº produto: ", i + 1);
        scanf("%f", &quantidade[i]);
    }

   
    printf("\nValor arrecadado com cada produto:\n");
    for (i = 0; i < 500; i++) {
        valor_arrecadado[i] = preco[i] * quantidade[i];  
        printf("Produto %d: %.2f\n", i + 1, valor_arrecadado[i]);
        total_arrecadado += valor_arrecadado[i];  
    }

    
    printf("\nValor total arrecadado: %.2f\n", total_arrecadado);

    return 0;
}