#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define HASH_SIZE 500


typedef struct atributes_id {
  char * scope;
  char* type;
  char* name;

} SymbolInfo;


typedef struct ListElement {
  SymbolInfo atributes;
  struct ListElement *next;
} HashList;


typedef struct hash_bucket {
  HashList *front, *back;
  int n_elems;
  /* other stuff */
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
	  hashtable[i].front = NULL;
	  hashtable[i].back = NULL;
	  hashtable[i].n_elems = 0;
	}
}


struct SymbolInfo *search(char* key) {
   //get the hash 
   int hashIndex = hashCode(key);  
	
   //pega na hashtable a linked list

   if(hashTable[hashIndex]->key){

   }

   //move in array until an empty 
   while(hashTable[hashIndex] != NULL) {
	
      if(hashTable[hashIndex]->key == key)
         return hashTable[hashIndex]; 
			
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }        
	
   return NULL;        
}

void insert(int key,int data) {

   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
   item->data = data;  
   item->key = key;

   //get the hash 
   int hashIndex = hashCode(key);

   //move in array until an empty or deleted cell
   while(hashTable[hashIndex] != NULL && hashTable[hashIndex]->key != -1) {
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }
	
   hashTable[hashIndex] = item;
}

struct DataItem* delete(struct DataItem* item) {
   int key = item->key;

   //get the hash 
   int hashIndex = hashCode(key);

   //move in array until an empty
   while(hashTable[hashIndex] != NULL) {
	
      if(hashTable[hashIndex]->key == key) {
         struct DataItem* temp = hashTable[hashIndex]; 
			
         //assign a dummy item at deleted position
         hashTable[hashIndex] = dummyItem; 
         return temp;
      }
		
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }      
	
   return NULL;        
}

void display() {
   int i = 0;
	
   for(i = 0; i<SIZE; i++) {
	
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