#include <stdio.h>
#include <stdlib.h>

/*  6. Prepare um programa para ler o nome e a idade de 30 pessoas. Apos a leitura dos dados o programa devera
 informar o nome de todas as pessoas que ficarem acima da media de idades */

int main() {

    char nome[30][100];  
    int idade[30];        
    int i;
    float soma_idades = 0, media;

   
    for (i = 0; i < 30; i++) {

        printf("Digite o nome da %dª pessoa: ", i + 1);
        scanf(" %[^\n]", nome[i]);  
        printf("Digite a idade de %s: ", nome[i]);
        scanf("%d", &idade[i]);     
        soma_idades += idade[i];    

    }

    media = soma_idades / 30;
    
    printf("\nA média das idades é: %.2f\n", media);

    printf("\nPessoas com idades acima da média:\n");
    for (i = 0; i < 30; i++) {

        if (idade[i] > media) {
            printf("%s\n", nome[i]);  

        }

    }

    return 0;
}
