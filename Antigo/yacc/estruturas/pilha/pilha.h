
typedef struct Elemento_da_lista{
    char *dados;
    struct Elemento_da_lista *proximo;
}Elemento;


typedef struct Elemento_da_pilha{
  Elemento *inicio;
  int tamanho;
} Pilha;


void iniciar (Pilha *monte);

int empilhar(Pilha * monte, char *dados);

int desempilhar (Pilha *monte);

Elemento* mostrarTopo (Pilha *monte);

void mostrar(Pilha * monte);