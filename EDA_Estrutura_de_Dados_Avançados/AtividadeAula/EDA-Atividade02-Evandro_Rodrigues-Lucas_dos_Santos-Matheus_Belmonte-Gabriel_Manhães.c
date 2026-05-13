#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    float contTotal = 0, contAprovado = 0, contReprovado = 0;
    float notaMax = 0,notaMin = 999999,nota,soma,somaReprovados, mediaReprovados;
    FILE *arqEntrada, *arqSaida;

    arqEntrada = fopen("C:\\Git_Evandro\\Estudos-e-Praticas-em-C-\\Notas.txt", "r");

    if(arqEntrada == NULL){
        printf("\nErro na abertura do arquivo! \n\n");
        return 1; 
    }

    /* Loop para leitura de cada nota */
   
    while(!feof(arqEntrada)){



        fscanf(arqEntrada, "%f", &nota);
        soma = soma + nota;
        contTotal++; 

        if (nota < 7){

            contReprovado++;
            somaReprovados = nota + somaReprovados;

        }

        if(nota < notaMin){

            notaMin = nota;
        }
        if(nota > notaMax){


            notaMax = nota;
        }


    }

    mediaReprovados = somaReprovados/contReprovado;

    contAprovado = contTotal - contReprovado;

    float porcentagemA = contAprovado*100/ contTotal;
    float porcentagemR = contReprovado*100 / contTotal;

    
    fclose(arqEntrada);

    arqSaida = fopen("Resultados.txt", "w"); // Letra A
    fprintf(arqSaida, "\nNota Maxima = %.2f \nNota Minima = %.2f \n\n", notaMax,notaMin);
    fclose(arqSaida);

    arqSaida = fopen("Aprovados.txt", "w"); // Letra B
    fprintf(arqSaida, "\nO numero de alunos aprovados e = %.0f \n\n", contAprovado);
    fclose(arqSaida);

    arqSaida = fopen("Reprovados.txt", "w"); // Letra C
    fprintf(arqSaida, "\nA media de reprovados e = %.2f \n\n", mediaReprovados);
    fclose(arqSaida);

    arqSaida = fopen("Porcentagens.txt", "w"); // Letra D
    fprintf(arqSaida, "\nA porcentagem de aprovados e: %.2f%% \nA porcentagem de reprovados e: %.2f%% \n\n", porcentagemA,porcentagemR);
    fclose(arqSaida);

    


    return 0;

}