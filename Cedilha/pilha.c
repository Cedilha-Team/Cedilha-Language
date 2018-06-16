#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "./include/pilha.h"
#include "./include/memoryBank.h"

void iniciar (Pilha *monte){
  monte->inicio = NULL;
  monte->tamanho = 0;
}

int empilhar(Pilha * monte, char *scopeName, char* scopeType){

  create_pointer(ElementoTipoNome,novo_elemento,1);
  
  create_pointer(char,auxScopeName,1+strlen(scopeName));
  test(auxScopeName){
    novo_elemento->scopeName = auxScopeName;
    strcpy (novo_elemento->scopeName, scopeName);
  }
  
  create_pointer(char,auxScopeType,1+strlen(scopeName));
  test(auxScopeType){
    novo_elemento->scopeType = auxScopeType;
    strcpy (novo_elemento->scopeType, scopeType);
  }
  
  novo_elemento->proximo = monte->inicio;
  monte->inicio = novo_elemento;
  monte->tamanho++;
}

int desempilhar (Pilha *monte){
  ElementoTipoNome *p_elemento;
  if (monte->tamanho == 0)
    return -1;
  p_elemento = monte->inicio;
  monte->inicio = monte->inicio->proximo;
  monte->tamanho--;
  return 0;
}

ElementoTipoNome* mostrarTopo (Pilha *monte){

  if (monte->tamanho == 0)
    return NULL;

  return monte->inicio;
}

void mostrar(Pilha * monte){
  ElementoTipoNome *atual;
  int i;
  atual = monte->inicio;
  
  for(i=0;i<monte->tamanho;++i){
    printf("scope:\t\t%s, %s\n", atual->scopeName, atual->scopeType);
    atual = atual->proximo;
  }
}

int procurar(Pilha * monte, char* scopeName, char* scopeType){
  ElementoTipoNome *atual;
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

ElementoTipoNome* topo(Pilha * monte, int n){
  if(n > monte->tamanho || n > 0){
    return NULL;
  }
  
  ElementoTipoNome *atual;
  int i;
  atual = monte->inicio;
  
  for(i=0;i<n;++i){
    atual = atual->proximo;
  }
  return atual;
}

