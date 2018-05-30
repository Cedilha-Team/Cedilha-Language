typedef struct list_elem {
  void *whatever_it_is;
  struct list_elem *next;
} HashList;
 
typedef struct hash_bucket {
  HashList *front, *back;
  int n_elems;
  /* other stuff */
} HashBucket;
 
#define HASH_SIZE (123456)
 
HashBucket hashtable[HASH_SIZE];
 
for (int i=0; i < HASH_SIZE; i++) {
  hashtable[i].front = NULL;
  hashtable[i].back = NULL;
  hashtable[i].n_elems = 0;