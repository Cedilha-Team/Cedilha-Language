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
    
    void* resultado = nextPosition;
    
    nextPosition = nextPosition + 8 + size;
    
    char* toBeMarked = (char*) resultado;
    
    strcpy(toBeMarked,"/*scp*/");
    
    return resultado + 8;
}

void stopMemoryBank(){
    free(memoryBank);
    
}

char *remove_substr (char *str, char *substr)
{
     char *aux; // guarda o endereco da pos inicial de substr na str.
     int tam;
     register int i; // armazenado em registrador.
     
     tam = strlen (substr); // armazena tamanho da substr.
     aux = strstr (str, substr); // retorna endereco inicial da substr.
     
    if (aux) // A substring esta contida na string? (endereco retornado?)
    {
       if (aux == str) // remove substring no inicio.
          for (i = 0; i < tam; i++, ++str);
       else
       {
           /* i guarda a posicao inicial da substring
              tam e o tamanho do deslocamento (quantidade de caracteres apos
              a substring). */
          for (i = (aux - str); i < strlen(str); i++)
             str[i] = str[i + tam];      
       }              
       return str;           
    } 
    else
        return " ";
}