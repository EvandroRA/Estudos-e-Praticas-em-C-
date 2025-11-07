#include<stdio.h> 
#include<stdlib.h> 

/* 2- Prepare um algoritmo para perguntar o nome e a altura de 20 pessoas e informar:
(a) a media destas alturas
(b) a altura da pessoa mais baixa
(c) o nome da pessoa mais alta  */

int main(){
	
    char nomes[20][100]; // matriz com 20 linhas e 100 colunas.
    float alturas[20];       
    float soma_alturas = 0;  
    float altura_minima, altura_maxima;  
    int indice_minimo, indice_maximo;  
    int i;

    altura_minima = 999.0;  
    altura_maxima = 0.0;    

    for (i = 0; i < 20; i++) {
    	
        printf("Digite o nome da %d pessoa: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);  

        printf("Digite a altura (em metros) da %d pessoa: ", i + 1);
        scanf("%f", &alturas[i]);  
        getchar();  

        soma_alturas += alturas[i];  // Acumula as alturas para calcular a média

        
        if (alturas[i] < altura_minima) {
            altura_minima = alturas[i];
            indice_minimo = i;  // Armazena o índice da pessoa mais baixa
        }

        
        if (alturas[i] > altura_maxima) {
            altura_maxima = alturas[i];
            indice_maximo = i;  // Armazena o índice da pessoa mais alta
        }
    }

    float media_altura = soma_alturas / 20;

    printf("\nMedia das alturas: %.2f metros\n", media_altura);
    printf("Pessoa mais baixa: %s com %.2f metros\n", nomes[indice_minimo], altura_minima);
    printf("Pessoa mais alta: %s com %.2f metros\n", nomes[indice_maximo], altura_maxima);

    return 0;
        
}
        
        
        



