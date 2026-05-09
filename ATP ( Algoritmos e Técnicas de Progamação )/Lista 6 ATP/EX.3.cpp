#include <stdio.h>
#include <string.h>

/*    3- Prepare um algoritmo para perguntar a um certo numero de pessoas seu nome, sexo, peso e nacionalidade.
 Informe:
 (a) A media de peso destas pessoas
 (b) O nome da pessoa mais pesada
 (c) O nome da mulher brasileira mais leve
 Parar a execucao do algoritmo quando o nome da pessoa for SAIR */

int main() {
    
    char nome[50], nome_mais_pesado[50] = "", nome_mulher_br_mais_leve[50] = "";
    char sexo, nacionalidade[30];
    float peso, soma_peso = 0, maior_peso = 0, menor_peso_mulher_br = -1;
    int count = 0;
    
    while (1) {
        
        printf("\nNome (digite SAIR para encerrar): ");
        scanf(" %[^\n]s", nome);  //  lê até a nova linha (que ocorre no final da entrada)
        if (strcmp(nome, "SAIR") == 0) break;
        
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Peso: ");
        scanf("%f", &peso);
        printf("Nacionalidade: ");
        scanf(" %[^\n]s", nacionalidade);  //  permite a leitura de nacionalidades com espaços
        
        soma_peso += peso;
        count++;
        
        if (peso > maior_peso) {
            maior_peso = peso;
            strcpy(nome_mais_pesado, nome);
        }
        
        if ((sexo == 'F' || sexo == 'f') && (strcmp(nacionalidade, "Brasileira") == 0 || strcmp(nacionalidade, "brasileira") == 0)) {
            if (menor_peso_mulher_br == -1 || peso < menor_peso_mulher_br) {
                menor_peso_mulher_br = peso;
                strcpy(nome_mulher_br_mais_leve, nome);
            }
        }
    }
    
    if (count > 0) {
    	
        printf("\nMedia de peso: %.2f\n", soma_peso / count);
        printf("Pessoa mais pesada: %s\n", nome_mais_pesado);
        if (strlen(nome_mulher_br_mais_leve) > 0) {
            printf("Mulher brasileira mais leve: %s\n", nome_mulher_br_mais_leve);
        } else {
            printf("Nenhuma mulher brasileira registrada.\n");
        }
    } else {
        printf("Nenhuma pessoa foi registrada.\n");
    }
    
    return 0;
}
