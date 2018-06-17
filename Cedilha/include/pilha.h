#ifndef PILHA
#define PILHA

typedef struct Elemento_da_lista{
    char *scopeName;
    char* scopeType;
    struct Elemento_da_lista *proximo;
}ElementoTipoNome;


typedef struct Elemento_da_pilha{
  ElementoTipoNome *inicio;
  int tamanho;
} Pilha;

void iniciar (Pilha *monte);

int empilhar(Pilha * monte, char *scopeName, char* scopeType);

int desempilhar (Pilha *monte);

ElementoTipoNome* mostrarTopo (Pilha *monte);

void mostrar(Pilha * monte);

int procurar(Pilha * monte, char* scopeName, char* scopeType);

ElementoTipoNome* procurarTopo(Pilha * monte, int n);


#endif