/* Inpirações:
*  http://www.learn-c.org/en/Linked_lists		
*  
*/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define HASH_SIZE 5

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

		return (int)hash % HASH_SIZE;
}


void initializeHashTable(){
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
	//get the hash 
	int hashIndex = hashCode(key);

	/* Extracting Linked List at a given index */
	HashList * list = hashTable[hashIndex].head;

	/* Creating an item to insert in the Hash Table */
	HashList * tempNode;
	tempNode = (HashList *) malloc(sizeof(HashList));
	tempNode->atributes.name = (char *) malloc(sizeof(strlen(atribute.name)));
	tempNode->atributes.name = atribute.name;
	tempNode->atributes.scope = (char *) malloc(sizeof(strlen(atribute.scope)));
	tempNode->atributes.scope = atribute.scope;
	tempNode->atributes.type = (char *) malloc(sizeof(strlen(atribute.type)));
	tempNode->atributes.type = atribute.type;
	tempNode->next=NULL;

	if (list == NULL){

		/* Absence of Linked List at a given Index of Hash Table */

		hashTable[hashIndex].head = tempNode;
		hashTable[hashIndex].n_elems++;

		if(hashTable[hashIndex].head->next == NULL)
			printf("inserido head: %s%s\n",hashTable[hashIndex].head->atributes.name, hashTable[hashIndex].head->atributes.scope);

		return SUCESSO;

	}
	else{
		/* A Linked List is present at given index of Hash Table */
		SymbolInfo* item = search(key,atribute.name,atribute.scope); 
		printf("saiii da search!!\n");

		if (item == NULL){

			HashList * current = list;

			if(current != NULL)
				printf("head do: %s%s\n",hashTable[hashIndex].head->atributes.name, hashTable[hashIndex].head->atributes.scope);

			printf("oh ceus\n");
			while (current != NULL) {
		        //proximo
				current = current->next;
			}
			

			/* now we can add a new variable */
		current = tempNode;
		hashTable[hashIndex].n_elems++;
		
		printf("inserido: %s%s\n",current->atributes.name, current->atributes.scope);
		return SUCESSO;

		}else{
			return ERRO1_SYMBOLINFO_JA_FOI_INSERIDO;
		}
	}
}

int delete(char* key, char*name, char*scope) {
	//get the hash 
	int hashIndex = hashCode(key);
	int flag = 0;

	if(hashTable[hashIndex].n_elems != 0){

		HashList * currentNode = hashTable[hashIndex].head;
		HashList * previous = NULL;

		while(currentNode!=NULL)
		{

			info = &currentNode->atributes;

			if(strcmp(info->name, name) == 0 && strcmp(info->scope, scope) ==0)
			{
				if(previous==NULL)
					hashTable[hashIndex].head = currentNode->next;
				else
					previous->next = currentNode->next;

				printf("%s%s foi deletado da lista\n", name,scope);
				hashTable[hashIndex].n_elems--;
				return SUCESSO;
			}

			previous = currentNode;
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
         printf(" (%d,%d) ->\n",i,hashTable[i].n_elems);
      }
   }
	
   printf("\n");
}

int main() {


	initializeHashTable();

	SymbolInfo info1;
	info1.name = (char *) malloc(sizeof(char*));
	info1.name = "soma";
	info1.scope = (char *) malloc(sizeof(char*));
	info1.scope = "main";
	info1.type = (char *) malloc(sizeof(char*));
	info1.type = "inteiro";
	printf(" a inserir somamain\n");

	insert("somamain",info1);
	display();

	insert("somamain",info1);
	display();


	SymbolInfo info2;
	info2.name = (char *) malloc(sizeof(char*));
	info2.name = "soma";
	info2.scope = (char *) malloc(sizeof(char*));
	info2.scope = "funcao1";
	info2.type = (char *) malloc(sizeof(char*));
	info2.type = "inteiro";
	printf("a inserir: somafuncao1\n");
	insert("somafuncao1",info2);
	display();

	// SymbolInfo info3;
	// info3.name = (char *) malloc(sizeof(char*));
	// info3.name = "sub";
	// info3.scope = (char *) malloc(sizeof(char*));
	// info3.scope = "main";
	// info3.type = (char *) malloc(sizeof(char*));
	// info3.type = "inteiro";
	// printf(" a inserir submain\n");

	// insert("submain",info3);
	// display();

	SymbolInfo info4;
	info4.name = (char *) malloc(sizeof(char*));
	info4.name = "mult";
	info4.scope = (char *) malloc(sizeof(char*));
	info4.scope = "funcao1";
	info4.type = (char *) malloc(sizeof(char*));
	info4.type = "inteiro";
	printf(" a inserir multfuncao1\n");
	insert("multfuncao1",info4);
	display();

	SymbolInfo info5;
	info5.name = (char *) malloc(sizeof(char*));
	info5.name = "nome";
	info5.scope = (char *) malloc(sizeof(char*));
	info5.scope = "funcao1";
	info5.type = (char *) malloc(sizeof(char*));
	info5.type = "string";
	printf(" a inserir nomefuncao1\n");
	insert("nomefuncao1",info5);
	display();
	printf("elemento em 3: %d\n",hashTable[3].n_elems );
	SymbolInfo info6;
	info6.name = (char *) malloc(sizeof(char*));
	info6.name = "idade";
	info6.scope = (char *) malloc(sizeof(char*));
	info6.scope = "main";
	info6.type = (char *) malloc(sizeof(char*));
	info6.type = "inteiro";
	printf(" a inserir idademain\n");
	insert("idademain",info6);
	display();

	SymbolInfo info7;
	info7.name = (char *) malloc(sizeof(char*));
	info7.name = "mult";
	info7.scope = (char *) malloc(sizeof(char*));
	info7.scope = "funcao1";
	info7.type = (char *) malloc(sizeof(char*));
	info7.type = "inteiro";
	printf(" a inserir multfuncao1\n");
	insert("multfuncao1",info7);
	display();

    dummyInfo = search("nomefuncao1","nome","funcao1");
    if(dummyInfo == NULL){
    	printf("SymbolInfo não encontrado\n");
    }else{
    	printf("encontrado %s\n", dummyInfo->name);	
    }

    if(delete("nomefuncao1","nome","funcao1") == SUCESSO){
    	printf("SymbolInfo excluido\n");
    }else{
    	printf("SymbolInfo nao encontrado\n");
    }
    display();
}