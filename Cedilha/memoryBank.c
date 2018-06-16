#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "./include/memoryBank.h"

void startMemoryBank(){
    memoryBank = malloc(MAX_BANK_SIZE);
    nextPosition = memoryBank;
    firstPosition = nextPosition;
    lastPosition = memoryBank + MAX_BANK_SIZE;
}

void * alloc( int size){
    if( (void*)(nextPosition + size) > lastPosition){
        stopMemoryBank();
        printf("Memória lotou, aumente o MAX_BANK_SIZE.\n");
        assert(1==0);
    }
    
    void* resultado =nextPosition;
    
    nextPosition = nextPosition + 4 + size;
    
    char* toBeMarked = (char*) resultado;
    
    strcpy(toBeMarked,"cla");
    
    return resultado + 4;
}

void stopMemoryBank(){
    free(memoryBank);
    
}

int stringPorRef(char * string){
    strcat(string,"oioioio");
    return 0;
}