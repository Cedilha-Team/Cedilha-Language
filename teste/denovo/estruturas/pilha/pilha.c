
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Elemento_da_lista{
    char *scopeName;
    char* scopeType;
    struct Elemento_da_lista *proximo;
}Elemento;


typedef struct Elemento_da_pilha{
  Elemento *inicio;
  int tamanho;
} Pilha;

void iniciar (Pilha *monte){
  monte->inicio = NULL;
  monte->tamanho = 0;
}

int empilhar(Pilha * monte, char *scopeName, char* scopeType){
  Elemento *novo_elemento;
  if ((novo_elemento = (Elemento *) malloc (sizeof (Elemento))) == NULL)
    return -1;
  if ((novo_elemento->scopeName = (char *) malloc (50 * sizeof (char)))
      == NULL)
    return -1;
  if ((novo_elemento->scopeType = (char *) malloc (50 * sizeof (char)))
      == NULL)
    return -1;
    
  strcpy (novo_elemento->scopeName, scopeName);
  strcpy (novo_elemento->scopeType, scopeType);
  novo_elemento->proximo = monte->inicio;
  monte->inicio = novo_elemento;
  monte->tamanho++;
}

int desempilhar (Pilha *monte){
  Elemento *p_elemento;
  if (monte->tamanho == 0)
    return -1;
  p_elemento = monte->inicio;
  monte->inicio = monte->inicio->proximo;
  free (p_elemento->scopeName);
  free (p_elemento->scopeType);
  free (p_elemento);
  monte->tamanho--;
  return 0;
}

Elemento* mostrarTopo (Pilha *monte){

  if (monte->tamanho == 0)
    return NULL;

  return monte->inicio;
}

void mostrar(Pilha * monte){
  Elemento *atual;
  int i;
  atual = monte->inicio;
  
  for(i=0;i<monte->tamanho;++i){
    printf("scope:\t\t%s, %s\n", atual->scopeName, atual->scopeType);
    atual = atual->proximo;
  }
}

int procurar(Pilha * monte, char* scopeName, char* scopeType){
  Elemento *atual;
  int i;
  atual = monte->inicio;
  for(i=0;i<monte->tamanho;++i){
    if(strcmp(atual->scopeName,scopeName)==0
        && strcmp(atual->scopeType,scopeType)==0){
      printf("ja esta na pilha\n");
      return 1;
    }
    atual = atual->proximo;
  }
  return -1;
}

Elemento* topo(Pilha * monte, int n){
  if(n > monte->tamanho || n > 0){
    return NULL;
  }
  
  Elemento *atual;
  int i;
  atual = monte->inicio;
  
  for(i=0;i<n;++i){
    atual = atual->proximo;
  }
  return atual;
}

