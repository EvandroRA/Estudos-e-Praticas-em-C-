#include <stdio.h>
#include <stdlib.h>

/* 
 6. Criar um programa que leia um numero inteiro entre 1 e 12 e escreva o nome do mes correspondente. Caso o
 usuario digite um numero fora desse intervalo, devera aparecer uma mensagem informando que nao existe mes
 com este numero
*/

int Mes;

int main() {
    
    
	printf("Digite um numero entre 1 e 12 para ver o mes correspondente \n");
    scanf("%d",&Mes);

    
    switch (Mes) {
    	
        case 1:  printf("Janeiro\n"); break;
        case 2:  printf("Fevereiro\n"); break;
        case 3:  printf("Março\n"); break;
        case 4:  printf("Abril\n"); break;
        case 5:  printf("Maio\n"); break;
        case 6:  printf("Junho\n"); break;
        case 7:  printf("Julho\n"); break;
        case 8:  printf("Agosto\n"); break;
        case 9:  printf("Setembro\n"); break;
        case 10: printf("Outubro\n"); break;
        case 11: printf("Novembro\n"); break;
        case 12: printf("Dezembro\n"); break;
        
        default: printf("Nao existe mês com este número.\n"); break;
        
    }
    

    return 0;
}