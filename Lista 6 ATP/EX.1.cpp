#include<stdio.h> 
#include<stdlib.h> 

 /* 1- Prepare um algoritmo para perguntar o nome e o sexo de 10 pessoas e informar quantas sao homens e quantas
sao mulheres. */

int main(){
	
    int i, homens = 0, mulheres = 0;
    char nome[100], sexo;

    for (i = 1; i <= 10; i++) {
       
        printf("Informe o nome da %d pessoa: ", i);
        fgets(nome, sizeof(nome), stdin);  // fgets para ler o nome incluindo espaços, stdin e utilizado para a leitura do fgets.
        
        
        printf("Informe o sexo (M para masculino e F para feminino): ");
        scanf(" %c", &sexo);  

        if (sexo == 'M' || sexo == 'm') {
        	
            homens++;
        } else if (sexo == 'F' || sexo == 'f') {
        	
            mulheres++;
        }
        
        getchar();  // limpa a linha do buffer após o scanf
    }

    printf("\nTotal de homens: %d\n", homens);
    printf("Total de mulheres: %d\n", mulheres);

    return 0;
}


