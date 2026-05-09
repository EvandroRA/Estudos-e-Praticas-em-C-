#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no_numero {
    int dado;
    struct no_numero *proximoNo;
} Tipo_lista_numeros;

Tipo_lista_numeros* inserirNumero(Tipo_lista_numeros *lista)
{ Tipo_lista_numeros *ponteiroAuxiliar;  // variavel ponteiroAuxiliar para percorrer a lista
  
  Tipo_lista_numeros *novoNo = malloc(sizeof(Tipo_lista_numeros));
  
  printf("\n Insira um numero: ");
  scanf("%d",&novoNo->dado);
  novoNo->proximoNo = NULL;
  
  if (lista == NULL)
  { 
    lista = novoNo;
    printf("Lista iniciada");
  }
  else
  { ponteiroAuxiliar = lista;
    while (ponteiroAuxiliar->proximoNo != NULL)
     {   ponteiroAuxiliar = ponteiroAuxiliar->proximoNo;}

    ponteiroAuxiliar->proximoNo = novoNo;
    printf("Novo no inserido no final da lista");
  }
  return lista;
}

void pesquisar(Tipo_lista_numeros *lista)
{ Tipo_lista_numeros *ponteiroAuxiliar;  // variavel ponteiroAuxiliar para percorrer a lista
  int numero_da_pesquisa;
  int achou = 0; // achou com zero indica que o numero não existe na lista

  printf("Deseja localizar qual numero? ");
  scanf("%d", &numero_da_pesquisa);
    
    ponteiroAuxiliar = lista;
    while (ponteiroAuxiliar != NULL)
    { if (ponteiroAuxiliar->dado == numero_da_pesquisa)
       {   achou = 1; 
           break;
       } //achou com 1 indica que o numero existe na lista
       
       ponteiroAuxiliar = ponteiroAuxiliar->proximoNo;
    }

    if (achou == 0)
    { printf("\n Numero nao existe na lista"); }
    else
    { printf("\n Numero localizado na lista"); }
}

void imprimirLista(Tipo_lista_numeros *lista)
{ Tipo_lista_numeros *ponteiroAuxiliar;  // variavel ponteiroAuxiliar para percorrer a lista
  
    ponteiroAuxiliar = lista;
    while (ponteiroAuxiliar != NULL)
    { printf("\n %d - ", ponteiroAuxiliar->dado);
      ponteiroAuxiliar = ponteiroAuxiliar->proximoNo;
    }
}

int main()
{ 
    int opcao;
    Tipo_lista_numeros *lista;

    lista = NULL;
    do {
    system("cls");
	printf("1 - Inserir Numero\n");
    printf("2 - Buscar Numero\n");
    printf("3 - Exibir Lista\n");
    printf("4 - Encerrar Programa\n");
    printf("Digite a sua opcao : ");
    scanf("%d",&opcao);
    switch (opcao)
    {
      case 1 : lista = inserirNumero(lista);
	       break;
      case 2 : pesquisar(lista);
	       break;
      case 3 : imprimirLista(lista);
	       break;
    }
    printf("\nTecle algo!");
	getch();

    } while (opcao != 4);

}