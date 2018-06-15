
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Elemento_da_lista{
    char *dados;
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

int empilhar(Pilha * monte, char *dados){
  Elemento *novo_elemento;
  if ((novo_elemento = (Elemento *) malloc (sizeof (Elemento))) == NULL)
    return -1;
  if ((novo_elemento->dados = (char *) malloc (50 * sizeof (char)))
      == NULL)
    return -1;
  strcpy (novo_elemento->dados, dados);
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
  free (p_elemento->dados);
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
    printf("\t\t%s\n", atual->dados);
    atual = atual->proximo;
  }
}

