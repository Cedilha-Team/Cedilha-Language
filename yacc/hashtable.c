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
   printf("to na funcao search\n");
   //get the hash 
   int hashIndex = hashCode(key);  
	printf("vou procura no index: %d que tem %d elemento(s)\n",hashIndex, hashTable[hashIndex].n_elems);
   //pega na hashtable a linked list
   if(hashTable[hashIndex].n_elems != 0){
   		if (hashTable[hashIndex].head == NULL) printf("ta vazio!\n");
   		HashList * current = hashTable[hashIndex].head;


	    while (current != NULL) {
	    	info = &current->atributes;

	    	if(strcmp(info->name, name) ==0 && strcmp(info->scope, scope) ==0){
	    		printf("encontrei: %s%s\n",name,scope);
	    		return info;
	    	}

	        //proximo
	        current = current->next;
	    }
   }       
	printf("nao encontrei!\n");
   return NULL;        
}

int insert(char* key, SymbolInfo atribute) {
	printf("entrei no insert!\n");
	//get the hash 
   int hashIndex = hashCode(key);

   HashList * tempNode;
   tempNode = (HashList *) malloc(sizeof(HashList));

   tempNode->atributes.name = atribute.name;
   tempNode->atributes.scope = atribute.scope;
   tempNode->atributes.type = atribute.type;
   tempNode->next=NULL;

    HashList * current = hashTable[hashIndex].head;

   if(current == NULL){
   		hashTable[hashIndex].head = tempNode;
   		hashTable[hashIndex].n_elems++;
   		return SUCESSO;
   		
   }else{

   
   	printf("a linked list nao esta vazia\n");
   		
	    while (current != NULL) {
	    	info = &current->atributes;

	    	//VERIFICA NA LISTA ENCADEADA SE O NOME JA NAO FOI DECLARADO NO ESCOPO.
	    	if(strcmp(info->name, atribute.name) == 0 && strcmp(info->scope, atribute.scope) ==0){
	    		printf("ja foi inserido: %s%s\n",info->name,info->scope );
	    		return ERRO1_SYMBOLINFO_JA_FOI_INSERIDO;
	    	}
		    //proximo
	        current = current->next;

	    }

	    printf("troca troca\n");
   /* now we can add a new variable */
	current = tempNode;
	hashTable[hashIndex].n_elems++;
	printf("terminei de inserir: %s%s\n",current->atributes.name, current->atributes.scope);
	return SUCESSO;

   }

   


   

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
	
      if(hashTable[i].n_elems != 0){
         printf(" (%d,%d) ->",i,hashTable[i].n_elems);
         HashList * current = hashTable[i].head;


         while (current != NULL) {
         	info = &current->atributes;
         	printf(" {%s%s}",info->name,info->scope );
        //proximo
         	current = current->next;
         }
         printf("\n");

      }
      else{
         printf(" ~~ \n");
      }
   }
	
   printf("\n");
}

int main() {


	initialize();
	SymbolInfo info1;
	info1.name = (char *) malloc(sizeof(char*));
	info1.name = "soma";
	info1.scope = (char *) malloc(sizeof(char*));
	info1.scope = "main";
	info1.type = (char *) malloc(sizeof(char*));
	info1.type = "inteiro";
	printf("symbolinfo1 criado!\n");

	insert("somamain",info1);

	SymbolInfo info2;
	info2.name = (char *) malloc(sizeof(char*));
	info2.name = "soma";
	info2.scope = (char *) malloc(sizeof(char*));
	info2.scope = "funcao1";
	info2.type = (char *) malloc(sizeof(char*));
	info2.type = "inteiro";
	printf("symbolinfo2 criado!\n");

	insert("somafuncao1",info2);
	insert("somafuncao1",info2);


    display();

    dummyInfo = search("somamain","soma","main");
    if(dummyInfo == NULL){
    	printf("nada encontrado\n");
    }else{
    	printf("%s\n", dummyInfo->name);	
    }

    
  
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