#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>


void * memoryBank;
char * aux;
char * nextPosition;
void * firstPosition;
void * lastPosition;

#define MAX_BANK_SIZE 50*1024*1024

void start(){
    memoryBank = malloc(MAX_BANK_SIZE);
    nextPosition = memoryBank;
    firstPosition = nextPosition;
    lastPosition = memoryBank + MAX_BANK_SIZE;
}

void * alloc( int size){
    if( nextPosition + size > lastPosition){
        stop();
        printf(" memória lotou");
        assert(1==0);
    }
    
    void* resultado =nextPosition;
    
    nextPosition = nextPosition + 4 + size;
    
    char* toBeMarked = (char*) resultado;
    
    strcpy(toBeMarked,"cla");
    
    printf("%s\n" , toBeMarked);
    
    return resultado + 4;
}

#define test(pointer) aux = (char  *) pointer; \
    if( !( lastPosition > (void *)pointer && firstPosition < (void *) pointer) \
      || !(strcmp("cla",(aux-4))==0)\
    ){\
        printf(" erro no ponteiro");\
        assert(1==0);\
    }else
    
    

#define create_pointer( type, name,size) type * name; \
    name = (type *) alloc( sizeof(type) * size)

void stop(){
    free(memoryBank);
    
}

int stringPorRef(char * string){
    strcat(string,"oioioio");
    return 0;
}

int main(){
    start();
      
    void * badMemory;
    create_pointer(char,goodMemory,1000);
    create_pointer(char,anotherMemory,1000);
    
    strcpy(goodMemory, "lalalal");
    strcpy(anotherMemory,"ouououo");
    
    strcat(goodMemory,anotherMemory);
 
    test(goodMemory){
        printf("ok");
        stringPorRef(goodMemory);
        printf("%s %d", goodMemory ,10);
    }
    
    
    
    stop();
    
}