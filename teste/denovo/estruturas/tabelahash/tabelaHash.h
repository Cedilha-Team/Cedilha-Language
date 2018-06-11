#ifndef HASHTABLE
#define HASHTABLE

/* Node for storing an item in a Linked List */
typedef struct symbol {

   char* key;

   char* name;
   char* scope;
   char* type;

   struct symbol *next;

}Symbol;


/* For storing a Linked List at each index of Hash Table  */
typedef struct linkedList {

   Symbol *head; /* head pointing the first element of Linked List at an index of Hash Table */
   Symbol *tail; /* tail pointing the last element of Linked List at an index of Hash Table */

}LinkedList;

typedef struct hashTable{
    int size;         /* Determines the no. of elements present in Hash Table */
    int max;	      /* Determines the maximum capacity of Hash Table array */
    LinkedList *array;
}HashTable;


/* For initializing the Hash Table */
void init_array(HashTable* hashTable, int max);

/* Returns size of Hash Table */ 
int size_of_array(HashTable* hashTable);

/* This function creates an index corresponding to the every given key */
int hashcode(char* key, int max);

Symbol * createSymbol(char* key, char* name, char* scope, char* type);


void rehash(HashTable* hashTable);

/*
 *This function finds the given key in the Linked List
 *Returns it's index
 *Returns -1 in case key is not present
*/
int find(Symbol *list, char* key);

/* Returns the node (Linked List item) located at given find_index  */
Symbol* get_element(Symbol *list, int find_index);

void insert(HashTable* hashTable, Symbol *item);

/* To remove an element from Hash Table */ 
void remove_element(HashTable* hashTable,char* key);

/* To display the contents of Hash Table */
void display(HashTable* hashTable);
#endif