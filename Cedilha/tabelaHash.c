#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>
#include "./include/tabelaHash.h"
#include "./include/memoryBank.h"

/* For initializing the Hash Table */
void init_array(HashTable* hashTable, int max){
    int i = 0;
    hashTable->size= 0;
    hashTable->max=max;
    //hashTable->array = (LinkedList*) malloc(hashTable->max * sizeof(Symbol));
    
    create_pointer(LinkedList,auxArray,hashTable->max);
    test(auxArray){
        hashTable->array = auxArray;
        for (i = 0; i < max; i++){
            
            hashTable->array[i].head = NULL;
        
            hashTable->array[i].tail = NULL;

        }
    }
}

/* Returns size of Hash Table */ 
int size_of_array(HashTable* hashTable){
    return hashTable->size;
}

/* This function creates an index corresponding to the every given key */
int hashcode(char* key, int max){
    unsigned long hash = 5381;
    int c;

    while (c = *key++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    unsigned int index = (int)hash % max;
    return (int)index;
}

Symbol * createSymbol(char* key, char* name, char* scope, char* type){
    //Symbol *item = (Symbol*) malloc(sizeof(Symbol));
    
    create_pointer(Symbol,item,1);
    test(item){
        create_pointer(char,auxKey,strlen(key) + 1);
        test(auxKey){
            memset(auxKey, '\0', sizeof(auxKey));
            item->key = auxKey;
            strcpy(item->key, key);
        }
        
        create_pointer(char,auxName,strlen(name) + 1);
        test(auxName){
            memset(auxName, '\0', sizeof(auxName));
            item->name = auxName;
            strcpy(item->name, name);
        }
        
        create_pointer(char,auxScope,strlen(scope) + 1);
        test(auxScope){
            memset(auxScope, '\0', sizeof(auxScope));
            item->scope = auxScope;
            strcpy(item->scope, scope);
        }
        
        create_pointer(char,auxType,strlen(type) + 1);
        test(auxType){
            memset(auxType, '\0', sizeof(auxType));
            item->type = auxType;
            strcpy(item->type, type);
        }
   
        item->next = NULL;
   
        return item;     
        
    }
}

int insert(HashTable* hashTable, Symbol *item){
    if(item == NULL){
        return -1;
    }
   float n = 0.0; /* n => Load Factor, keeps check on whether rehashing is required or not */

   int index = hashcode(item->key, hashTable->max);  
    
    if(index<0){
        index *= -1;
    }
    
    /* Extracting Linked List at a given index */
   Symbol *list = (Symbol*) hashTable->array[index].head;

    
    if (list == NULL) {

    /* Absence of Linked List at a given Index of Hash Table */
        printf("Inserting %s(key) and %s(type) \n", item->key, item->type);
        hashTable->array[index].head = item;
        hashTable->array[index].tail = item;
        hashTable->size++;
    } else {
    /* A Linked List is present at given index of Hash Table */
        int find_index = find(list, item->key);

        if (find_index == -1){
            /*
            *Key not found in existing linked list
            *Adding the key at the end of the linked list
            */
            hashTable->array[index].tail->next = item;
            hashTable->array[index].tail = item;
            hashTable->size++;
         }else {
    		/*
    		 *Key already present in linked list
    		*/
            printf("elemento já inserido na estrutura!\n");
            return 0;
         }
    }
    //Calculating Load factor

    n = (1.0 * hashTable->size) / hashTable->max;

    if (n >= 0.75){
    //rehashing
        printf("going to rehash\n");
        rehash(hashTable); 
    }
    
    return 1;
}



void rehash(HashTable* hashTable){

   LinkedList *temp = hashTable->array;     

    /* temp pointing to the current Hash Table array */
    int i = 0, n = hashTable->max;
    hashTable->size = 0;
    hashTable->max = 2 * hashTable->max;

	/*
	 *array variable is assigned with newly created Hash Table
	 *with double of previous array size
	*/
    
    //hashTable->array = (LinkedList*) malloc(hashTable->max * sizeof(Symbol));
    init_array(hashTable, hashTable->max);
    for (i = 0; i < n; i++){
    	/* Extracting the Linked List at position i of Hash Table array */
        Symbol* list = (Symbol*) temp[i].head;

        if (list == NULL) {
        /* if there is no Linked List, then continue */
            continue;

        } else {

		/*
		 *Presence of Linked List at i
		 *Keep moving and accessing the Linked List item until the end.
		 *Get one key and values at a time and add it to new Hash Table array.
		*/

            while (list != NULL) {
                insert(hashTable,createSymbol(list->key, list->name, list->scope, list->type));
                list = list->next;
            }
        }
    }

    temp = NULL;

}



/*
 *This function finds the given key in the Linked List
 *Returns it's index
 *Returns -1 in case key is not present
*/
int find(Symbol *list, char* key){

    int retval = 0;

    Symbol *temp = list;

    while (temp != NULL) {

        if (strcmp(temp->key, key)==0){

            return retval;

        }

        temp = temp->next;

        retval++;

    }

    return -1;
}


/*
 *This function finds the given key in the Hash Table
 *Returns it's Linked list
 *Returns -1 in case key is not present
*/
Symbol* findHashTable(HashTable * hashtable, char* key){
    
    int index = hashcode(key, hashtable->max);  
    /* Extracting Linked List at a given index */
    Symbol *list = (Symbol*) hashtable->array[index].head;
   

    Symbol *temp = list;

    while (temp != NULL) {
        if (strcmp(temp->key, key)==0){
            return temp;
        }

        temp = temp->next;
    }

    return NULL;
}


/* Returns the node (Linked List item) located at given find_index  */
Symbol* get_element(Symbol *list, int find_index){

    int i = 0;

    Symbol *temp = list;

    while (i != find_index) 

    {

      temp = temp->next;

      i++;

    }

    return temp;

}



/* To remove an element from Hash Table */ 
void remove_element(HashTable* hashTable,char* key){

    int index = hashcode(key,hashTable->max);

    Symbol *list = (Symbol*) hashTable->array[index].head;

    if (list == NULL){

        printf("This key does not exists\n");

    }else {

        int find_index = find(list, key);

        if (find_index == -1){

            printf("This key does not exists\n");

        } else {

            Symbol *temp = list;

            if (strcmp(temp->key, key)==0){

                hashTable->array[index].head = temp->next;

                printf("This key has been removed\n");

                return;

            }

            while (strcmp(temp->next->key, key)!=0){
                temp = temp->next;
            }

            if (hashTable->array[index].tail == temp->next){

                temp->next = NULL;

                hashTable->array[index].tail = temp;

            } else {

                temp->next = temp->next->next;
            }
        
            printf("This key has been removed\n");

        }
    }
}



/* To display the contents of Hash Table */
void display(HashTable* hashTable){

    int i = 0;

    for (i = 0; i < hashTable->max; i++){

        Symbol *temp = hashTable->array[i].head;

        if (temp == NULL){

            printf("array[%d] has no elements\n", i);
        }else {

            printf("array[%d] has elements-: ", i);

            while (temp != NULL){

                printf("key= %s  values={%s,%s,%s}\t", temp->key, temp->name,temp->scope,temp->type);
                temp = temp->next;

            }

            printf("\n");

        }
    }
}