#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "tabelaHash.h"

void main() 

{

   int choice, value, n, c;
   char key[50];
   char name[30];
   char scope[20];
   char type[10];
   //clrscr();
    HashTable* hashTable;


   hashTable = (HashTable*) malloc(sizeof(HashTable));

   init_array(hashTable,10);



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
        
        insert(hashTable,createSymbol(key, name, scope, type));



        break;



        case 2:



        printf("Deleting in Hash Table \nEnter the key to delete-:");

        scanf("%s", key);

        remove_element(hashTable,key);



        break;



        case 3:



        n = size_of_array(hashTable);

        printf("Size of Hash Table is-:%d\n", n);



        break;



        case 4:



        display(hashTable);



        break;



        default:



        printf("Wrong Input\n");



    }



    printf("\nDo you want to continue-:(press 1 for yes)\t");

    scanf("%d", &c);



}while(c == 1);



  //getch();
}