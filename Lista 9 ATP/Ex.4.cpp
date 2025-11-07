#include <stdio.h>
#include <stdlib.h>

/*
4. Prepare um programa para ler o nome e a idade de 30 pessoas. Apos a leitura de dados o programa devera
 informar o nome de todas as pessoas que carem acima da media de idades.
 obs:Utilize obrigatoriamente um vetor de structs
*/

typedef struct {
    char nome[100];
    int idade;
} Pessoa;

int main() {

    Pessoa pessoas[30]; 
    int i;
    float soma_idades = 0, media;

    
    for (i = 0; i < 30; i++) {

        printf("Digite o nome da %dª pessoa: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome); 
        printf("Digite a idade de %s: ", pessoas[i].nome);
        scanf("%d", &pessoas[i].idade);     
        soma_idades += pessoas[i].idade;    
    }

    media = soma_idades / 30;  
    
    printf("\nA média das idades é: %.2f\n", media);

    printf("\nPessoas com idades acima da média:\n");

    for (i = 0; i < 30; i++) {

        if (pessoas[i].idade > media) {
            
            printf("%s\n", pessoas[i].nome);  
        }
    }

    return 0;
}
