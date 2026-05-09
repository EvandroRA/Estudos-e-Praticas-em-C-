#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef int elemento;

struct NO {
   elemento dado;
   struct NO *esq;
   struct NO *dir;
};

typedef struct NO ARV;

ARV *inserir(ARV *T, elemento x);
ARV *buscar(ARV *T, elemento x);

void EmOrdem(ARV *T);
void PreOrdem(ARV *T);
void PosOrdem(ARV *T);

int main()
{ ARV *Raiz;

  Raiz = NULL;

  Raiz = inserir(Raiz,23);
  Raiz = inserir(Raiz,10);
  Raiz = inserir(Raiz,5);
  Raiz = inserir(Raiz,15);
  Raiz = inserir(Raiz,77);
  Raiz = inserir(Raiz,65);

  printf("PRE ORDEM (RED) \n");
  PreOrdem(Raiz);

  printf("POS ORDEM (EDR) \n");
  PosOrdem(Raiz);

  printf("\n Buscando numero 77... \n");

  if ( buscar(Raiz,77) == NULL)
  { printf("Numero nao encontrado.");}
  else
  { printf("Numero encontrado.");}


  printf("\n\n Buscando numero 80... \n");

  if ( buscar(Raiz,80) == NULL)
  { printf("Numero nao encontrado.");}
  else
  { printf("Numero encontrado.");}

}


//*** ROTINAS GERAIS PARA MANIPULACAO DE ARVORE DE BUSCA BINARIA ***


ARV *inserir(ARV *T, elemento x)
{ ARV aux;
if (T == NULL)
   { ARV *aux = (ARV*) malloc(sizeof(ARV));
     aux->dado = x;
     aux->esq = NULL;
     aux->dir = NULL;
     T = aux;
	}
   else
   {
     if (x < T->dado)
     { T->esq = inserir(T->esq, x); }
     else
     { T->dir = inserir(T->dir,x); }

   }
  return T;
}



//{EmOrdem = Simetrico}
void EmOrdem(ARV *T)
{   if (T != NULL)
    { EmOrdem(T->esq);
      printf("%d \n", T->dado);
      EmOrdem(T->dir);
    }
}


void PreOrdem(ARV *T)
{   if (T != NULL)
    { printf("%d \n", T->dado);
      PreOrdem(T->esq);
      PreOrdem(T->dir);
    }
}


void PosOrdem(ARV *T)
{   if (T != NULL)
    { PosOrdem(T->esq);
      PosOrdem(T->dir);
      printf("%d \n", T->dado);
    }
}


ARV *buscar(ARV *T, elemento x)
{ if (T==NULL)
  { return NULL; }
  else
  { if (x == T->dado) //elemento encontra-se na raiz
    { return T;	}
    else //procura os elementos nas subarvores
    { if (x < T->dado)
       { return buscar(T->esq, x); }
       else
       { return buscar(T->dir, x); }
    }
  }
}
