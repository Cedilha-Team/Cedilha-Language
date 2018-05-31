#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define HASH_SIZE 500

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
struct SymbolInfo* dummyInfo;
struct SymbolInfo* info;

int hashCode(char* str) {
   
   unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash % HASH_SIZE;
}


void initialize(){
	for (int i=0; i < HASH_SIZE; i++) {
	  hashtable[i].head = NULL;
	  hashtable[i].n_elems = 0;

	}

}


struct SymbolInfo *search(char* key, char*name, char*scope) {
   //get the hash 
   int hashIndex = hashCode(key);  
	
   //pega na hashtable a linked list
   if(hashTable[hashIndex] != NULL){
   		HashList * current = hashTable[hashIndex]->head;

	    while (current != NULL) {
	    	SymbolInfo* info = current->SymbolInfo;

	    	if(strcmp(info.name, name) ==0 && strcmp(info.scope, scope) ==0){
	    		return info;
	    	}

	        //proximo
	        current = current->next;
	    }
   }       
	
   return NULL;        
}

int insert(char* key, char*name, char*scope, char* type) {
	//get the hash 
   int hashIndex = hashCode(key);

   SymbolInfo atribute = SymbolInfo malloc(sizeof(SymbolInfo));
   atribute->name = name;
   atribute->scope = scope;
   atribute->type = type;

   if(hashTable[hashIndex] != NULL){
   		HashList * current = hashTable[hashIndex]->head;

	    while (current != NULL) {
	    	SymbolInfo* info = current->atributes;

	    	//VERIFICA NA LISTA ENCADEADA SE O NOME JA NAO FOI DECLARADO NO ESCOPO.
	    	if(strcmp(info.name, name) == 0 && strcmp(info.scope, scope) ==0){
	    		return ERRO1_SYMBOLINFO_JA_FOI_INSERIDO;
	    	}
		    //proximo
	        current = current->next;

	    }

	      /* now we can add a new variable */
		    current->next = malloc(sizeof(HashList));
		    current->next->head->atributes = atribute; 
		   	current->next->head->next = NULL; 
		   	hashTable[hashIndex]->n_elems++;
		   	return SUCESSO;
	    
   }else{
   	
   	hashTable[hashIndex]->head = malloc(sizeof(HashList));
   	hashTable[hashIndex]->head->atributes = atribute; 
   	hashTable[hashIndex]->head->next = NULL; 
   	hashTable[hashIndex]->n_elems++;
   	return SUCESSO;
   }   


}

int delete(char* key, char*name, char*scope) {
	//get the hash 
   int hashIndex = hashCode(key);
   SymbolInfo retAtributes = NULL;

   if(hashTable[hashIndex] != NULL){

   		HashList * currentNode = hashTable[hashIndex]->head;
   		HashList * tempNode = NULL;


	    while (currentNode != NULL) {
	    	SymbolInfo* info = currentNode->atributes;

	    	//VERIFICA NA LISTA ENCADEADA SE TEM O SYMBOLINFO ESPECIFICADO PARA EXCLUIR.
	    	if(strcmp(info.name, name) == 0 && strcmp(info.scope, scope) ==0){
	    		tempNode = currentNode->next;
			    retAtributes = tempNode->atributes;
			    currentNode->next = tempNode->next;
			    free(tempNode);
			    hashTable[hashIndex]->n_elems--;
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
	
      if(hashTable[i] != NULL)
         printf(" (%d,%d)",hashTable[i]->key,hashTable[i]->data);
      else
         printf(" ~~ ");
   }
	
   printf("\n");
}

int main() {
   dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
   dummyItem->data = -1;  
   dummyItem->key = -1; 

   insert(1, 20);
   insert(2, 70);
   insert(42, 80);
   insert(4, 25);
   insert(12, 44);
   insert(14, 32);
   insert(17, 11);
   insert(13, 78);
   insert(37, 97);

   display();
   item = search(37);

   if(item != NULL) {
      printf("Element found: %d\n", item->data);
   } else {
      printf("Element not found\n");
   }

   delete(item);
   item = search(37);

   if(item != NULL) {
      printf("Element found: %d\n", item->data);
   } else {
      printf("Element not found\n");
   }
}