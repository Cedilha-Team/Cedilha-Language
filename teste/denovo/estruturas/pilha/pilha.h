#ifndef PILHA
#define PILHA
typedef struct Elemento_da_lista{
    char *dados;
    struct Elemento_da_lista *proximo;
}Elemento;


typedef struct Elemento_da_pilha{
  Elemento *inicio;
  int tamanho;
} Pilha;

void iniciar (Pilha *monte);

int empilhar(Pilha * monte, char *scopeName, char* scopeType);

int desempilhar (Pilha *monte);

Elemento* mostrarTopo (Pilha *monte);

void mostrar(Pilha * monte);

int procurar(Pilha * monte, char* scopeName, char* scopeType);

Elemento* topo(Pilha * monte, int n);


#endif