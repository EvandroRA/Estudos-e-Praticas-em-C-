#include <stdio.h>
#include <stdlib.h>

/*
3. Prepare um programa para ler o preco e a quantidade vendida de 500 produtos. Seu programa devera informar:
 (a) O valor arrecadado com cada produto
 (b) O valor total arrecadado
 obs:Utilize obrigatoriamente um vetor de structs para armazenar os precos e as quantidades
*/

typedef struct {
    float preco;
    float quantidade;
} Produto;

int main() {

    Produto produtos[500];  
    float valor_arrecadado[500], total_arrecadado = 0;
    int i;

    
    for (i = 0; i < 500; i++) {

        printf("Digite o preco do %dº produto: ", i + 1);
        scanf("%f", &produtos[i].preco);  
        printf("Digite a quantidade vendida do %dº produto: ", i + 1);
        scanf("%f", &produtos[i].quantidade);  
    }

    printf("\nValor arrecadado com cada produto:\n");

    for (i = 0; i < 500; i++) {
        
        valor_arrecadado[i] = produtos[i].preco * produtos[i].quantidade;  
        printf("Produto %d: %.2f\n", i + 1, valor_arrecadado[i]);
        total_arrecadado += valor_arrecadado[i];  
    }

    printf("\nValor total arrecadado: %.2f\n", total_arrecadado);

    return 0;
}
