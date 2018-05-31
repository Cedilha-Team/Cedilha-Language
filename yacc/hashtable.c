/* Inpirações:
*  http://www.learn-c.org/en/Linked_lists		
*  
*/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define HASH_SIZE 100

const int ERRO1_SYMBOLINFO_JA_FOI_INSERIDO = -1;
const int ERRO2_NAO_EXISTE_SYMBOLINFO = -2;
const int SUCESSO = 1;


typedef struct atributes_id {
  char * scope;
  char* type;
  char* name;

} SymbolInfo;


typedef struct node {
  SymbolInfo atributes;
  struct node *next;
} HashList;


typedef struct hash_bucket {
  HashList *head;
  int n_elems;
} HashBucket;

HashBucket hashTable[HASH_SIZE]; 
SymbolInfo* dummyInfo;
SymbolInfo* info;

int hashCode(char* str) {
   
   unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

   printf("funcao hashcode: criei o hash %d\n",(int)hash );

    return (int)hash % HASH_SIZE;
}


void initialize(){
	for (int i=0; i < HASH_SIZE; i++) {
	  hashTable[i].head = NULL;
	  hashTable[i].n_elems = 0;

	}

}


SymbolInfo * search(char* key, char*name, char*scope) {
   //get the hash 
   int hashIndex = hashCode(key);  
	
   //pega na hashtable a linked list
   if(hashTable[hashIndex].n_elems != 0){
   		HashList * current = hashTable[hashIndex].head;

	    while (current != NULL) {
	    	info = &current->atributes;

	    	if(strcmp(info->name, name) ==0 && strcmp(info->scope, scope) ==0){
	    		return info;
	    	}

	        //proximo
	        current = current->next;
	    }
   }       
	
   return NULL;        
}

//int insert(char* key, char*name, char*scope, char* type) {
int insert(char* key, SymbolInfo atribute) {
	printf("entrei no insert!\n");
	//get the hash 
   int hashIndex = hashCode(key);

   // SymbolInfo atribute = SymbolInfo malloc(sizeof(SymbolInfo));
   // atribute->name = name;
   // atribute->scope = scope;
   // atribute->type = type;
   HashList * current = hashTable[hashIndex].head;
   if(current == NULL){
   	printf("tem nada na hash table no index %d\n",hashIndex );
   }

   if(hashTable[hashIndex].n_elems != 0){
   	printf("nem devo entrar aqui\n");
   		
	    while (current != NULL) {
	    	info = &current->atributes;

	    	//VERIFICA NA LISTA ENCADEADA SE O NOME JA NAO FOI DECLARADO NO ESCOPO.
	    	if(strcmp(info->name, atribute.name) == 0 && strcmp(info->scope, atribute.scope) ==0){
	    		return ERRO1_SYMBOLINFO_JA_FOI_INSERIDO;
	    	}
		    //proximo
	        current = current->next;

	    }

	      
	    
   }
   printf("troca troca\n");
   /* now we can add a new variable */
	current = malloc(sizeof(HashList));
	current->atributes = atribute; 
	current->next = NULL; 
	hashTable[hashIndex].n_elems++;
	printf("terminei de inserir\n");
	return SUCESSO;

}

int delete(char* key, char*name, char*scope) {
	//get the hash 
   int hashIndex = hashCode(key);
   SymbolInfo retAtributes;

   if(hashTable[hashIndex].n_elems != 0){

   		HashList * currentNode = hashTable[hashIndex].head;
   		HashList * tempNode = NULL;


	    while (currentNode != NULL) {
	    	info = &currentNode->atributes;

	    	//VERIFICA NA LISTA ENCADEADA SE TEM O SYMBOLINFO ESPECIFICADO PARA EXCLUIR.
	    	if(strcmp(info->name, name) == 0 && strcmp(info->scope, scope) ==0){
	    		tempNode = currentNode->next;
			    retAtributes = tempNode->atributes;
			    currentNode->next = tempNode->next;
			    free(tempNode);
			    hashTable[hashIndex].n_elems--;
	    		return SUCESSO;
	    	}
		    //proximo
	        currentNode = currentNode->next;

	    }

	
   }
   	
   	return ERRO2_NAO_EXISTE_SYMBOLINFO;

}


void display() {
   int i = 0;
	
   for(i = 0; i<HASH_SIZE; i++) {
	
      if(hashTable[i].n_elems != 0)
         printf(" (%d,%d)\n",i,hashTable[i].n_elems);
      else
         printf(" ~~ \n");
   }
	
   printf("\n");
}

int main() {


	initialize();
	SymbolInfo info;
	info.name = (char *) malloc(sizeof(char*));
	info.name = "soma";
	info.scope = (char *) malloc(sizeof(char*));
	info.scope = "main";
	info.type = (char *) malloc(sizeof(char*));
	info.type = "inteiro";
	printf("symbolinfo criado!\n");

	insert("somamain",info);


   display();
   // item = search(37);

   // if(item != NULL) {
   //    printf("Element found: %d\n", item->data);
   // } else {
   //    printf("Element not found\n");
   // }

   // delete(item);
   // item = search(37);

   // if(item != NULL) {
   //    printf("Element found: %d\n", item->data);
   // } else {
   //    printf("Element not found\n");
   // }
}