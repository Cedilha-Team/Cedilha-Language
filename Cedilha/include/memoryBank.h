#ifndef MEMORYBANK
#define MEMORYBANK

void * memoryBank;
char * aux;
char * nextPosition;
void * firstPosition;
void * lastPosition;


#define MAX_BANK_SIZE 50*1024*1024

/* Inicialiaza o banco de memória, alocando espaço do tamanho de MAX_BANK_SIZE. */
void startMemoryBank();

/* Finaliza o banco de memória, desalocando a memória alocada.*/
void stopMemoryBank();

/* Aloca ponteiros dentro do banco de memória do tamanho "size"*/
void * alloc( int size);

char *remove_substr (char *str, char *substr);


/*Cria ponteiros de qualquer tipo definido em "type", com o nome da variavel definida em "name", de tamanho "size" */
#define create_pointer( type, name,size) type * name; \
    name = (type *) alloc( sizeof(type) * size);
    
    

/*Testa se o ponteiro está funcionando */
#define test(pointer) aux = (char  *) pointer; \
    if( !( lastPosition > (void *)pointer && firstPosition < (void *) pointer) \
      || !(strcmp("/*scp*/",(aux-8))==0)\
    ){\
        printf(" erro no ponteiro");\
        assert(1==0);\
    }else

#endif