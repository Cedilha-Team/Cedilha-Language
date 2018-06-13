#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/* Node for storing an item in a Linked List */
struct symbol {

   char* key;

   char* name;
   char* scope;
   char* type;

   struct symbol *next;

};


/* For storing a Linked List at each index of Hash Table  */
struct linkedList {

   struct symbol *head; /* head pointing the first element of Linked List at an index of Hash Table */
   struct symbol *tail; /* tail pointing the last element of Linked List at an index of Hash Table */

};

struct hashTable{
    int size;         /* Determines the no. of elements present in Hash Table */
    int max;	      /* Determines the maximum capacity of Hash Table array */
    struct linkedList *array;
};

struct hashTable* hashTable;

struct symbol* get_element(struct symbol *list, int find_index);
void remove_element(char* key);
void rehash();
void init_array(int max);
int find(struct symbol *list, char* key);

/* For initializing the Hash Table */
void init_array(int max){
    int i = 0;
    hashTable->size= 0;
    hashTable->max=max;
    hashTable->array = (struct linkedList*) malloc(hashTable->max * sizeof(struct symbol));
    
    for (i = 0; i < max; i++){
        hashTable->array[i].head = NULL;
        hashTable->array[i].tail = NULL;
    }
}

/* Returns size of Hash Table */ 
int size_of_array(){
    return hashTable->size;
}

/* This function creates an index corresponding to the every given key */
int hashcode(char* key){
    unsigned long hash = 5381;
    int c;

    while (c = *key++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return (int)hash % hashTable->max;
}

void insert(char* key, char* name, char* scope, char* type){

   float n = 0.0; /* n => Load Factor, keeps check on whether rehashing is required or not */

   int index = hashcode(key);  

    /* Extracting Linked List at a given index */
   struct symbol *list = (struct symbol*) hashTable->array[index].head;

    /* Creating an item to insert in the Hash Table */
   struct symbol *item = (struct symbol*) malloc(sizeof(struct symbol));
   item->key = (char *) malloc(sizeof(char)*strlen(key) + 1);
   strcpy(item->key, key);
   item->name = (char *) malloc(sizeof(char)*strlen(name) + 1);
   strcpy(item->name, name);
   item->scope = (char *) malloc(sizeof(char)*strlen(scope) + 1);
   strcpy(item->scope, scope);
   item->type = (char *) malloc(sizeof(char)*strlen(type) + 1);
   strcpy(item->type, type);
   item->next = NULL;


    if (list == NULL) {

    /* Absence of Linked List at a given Index of Hash Table */
        printf("Inserting %s(key) and %s(type) \n", key, type);
        hashTable->array[index].head = item;
        hashTable->array[index].tail = item;
        hashTable->size++;
    } else {
    /* A Linked List is present at given index of Hash Table */
        int find_index = find(list, key);

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
    		 *Updating the value of already existing key
    		*/
            printf("elemento já inserido na estrutura!\n");
         }
    }
    //Calculating Load factor

    n = (1.0 * hashTable->size) / hashTable->max;

    if (n >= 0.75){
    //rehashing
        printf("going to rehash\n");
        rehash(); 
    }
}



void rehash(){

   struct linkedList *temp = hashTable->array;     

    /* temp pointing to the current Hash Table array */
    int i = 0, n = hashTable->max;
    hashTable->size = 0;
    hashTable->max = 2 * hashTable->max;

	/*
	 *array variable is assigned with newly created Hash Table
	 *with double of previous array size
	*/

    hashTable->array = (struct linkedList*) malloc(hashTable->max * sizeof(struct symbol));
    init_array(hashTable->max);
    for (i = 0; i < n; i++){
    	/* Extracting the Linked List at position i of Hash Table array */
        struct symbol* list = (struct symbol*) temp[i].head;

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
                insert(list->key, list->name, list->scope, list->type);
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
int find(struct symbol *list, char* key){

    int retval = 0;

    struct symbol *temp = list;

    while (temp != NULL) {

        if (strcmp(temp->key, key)==0){

            return retval;

        }

        temp = temp->next;

        retval++;

    }

    return -1;
}



/* Returns the node (Linked List item) located at given find_index  */
struct symbol* get_element(struct symbol *list, int find_index){

    int i = 0;

    struct symbol *temp = list;

    while (i != find_index) 

    {

      temp = temp->next;

      i++;

    }

    return temp;

}



/* To remove an element from Hash Table */ 
void remove_element(char* key){

    int index = hashcode(key);

    struct symbol *list = (struct symbol*) hashTable->array[index].head;

    if (list == NULL){

        printf("This key does not exists\n");

    }else {

        int find_index = find(list, key);

        if (find_index == -1){

            printf("This key does not exists\n");

        } else {

            struct symbol *temp = list;

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
void display(){

    int i = 0;

    for (i = 0; i < hashTable->max; i++){

        struct symbol *temp = hashTable->array[i].head;

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





void main() 

{

   int choice, value, n, c;
   char key[50];
   char name[30];
   char scope[20];
   char type[10];
   //clrscr();



   hashTable = (struct hashTable*) malloc(sizeof(struct hashTable));

   init_array(10);



   do {

      printf("Implementation of Hash Table in C chaining with Singly Linked List \n\n");

      printf("MENU-: \n1.Inserting item in the Hash Table"

        "\n2.Removing item from the Hash Table"

        "\n3.Check the size of Hash Table" 

        "\n4.To display a Hash Table"

        "\n\n Please enter your choice -: ");



      scanf("%d", &choice);



      switch(choice) 

      {



        case 1:



        printf("Inserting element in Hash Table\n");

        printf("Enter key and values(name, scope and type)-:\t");

        scanf("%s %s %s %s", key, name, scope, type);

        insert(key, name, scope, type);



        break;



        case 2:



        printf("Deleting in Hash Table \nEnter the key to delete-:");

        scanf("%s", key);

        remove_element(key);



        break;



        case 3:



        n = size_of_array();

        printf("Size of Hash Table is-:%d\n", n);



        break;



        case 4:



        display();



        break;



        default:



        printf("Wrong Input\n");



    }



    printf("\nDo you want to continue-:(press 1 for yes)\t");

    scanf("%d", &c);



}while(c == 1);



  //getch();
}