#include<stdio.h>

int main(){

    int cont = 0;
    float nota, soma = 0.0;
    FILE *arqEntrada, *arqSaida;

    /* Abertura do arquivo para leitura */
    arqEntrada = fopen("C:\\Git_Evandro\\Estudos-e-Praticas-em-C-\\Notas.txt", "r");

    if(arqEntrada == NULL){
        printf("\nErro na abertura do arquivo! \n\n");
        return 1; /* Aborta o programa */
    }

    /* Loop para leitura de cada nota */
   
    while(!feof(arqEntrada)){

        fscanf(arqEntrada, "%f", &nota);
        soma = soma + nota;
        cont++; //Conta quantas notas sao lidas

    }

    /* Fechamento do arquivo */
    fclose(arqEntrada);

    /* Abertura do arquivo para escrita */
    arqSaida = fopen("Media.txt", "w");

    /* Impressao do valor da media no arquivo "Media.txt" */
    fprintf(arqSaida, "\nMedia = %.2f \n\n", soma/cont);

    /* Fechamento do arquivo */
    fclose(arqSaida);

    return 0;
}