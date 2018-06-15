#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "memoryBank.h"

int main(){
    startMemoryBank();
      
    void * badMemory;
    create_pointer(char,goodMemory,100);
    create_pointer(char,anotherMemory,100);
    
    strcpy(goodMemory, "lalalal");
    strcpy(anotherMemory,"ouououo");
    
    strcat(goodMemory,anotherMemory);
 
    test(badMemory){
        printf("ok");
        stringPorRef(goodMemory);
        printf("%s %d", goodMemory ,10);
    }
    
    stopMemoryBank();
    
}

