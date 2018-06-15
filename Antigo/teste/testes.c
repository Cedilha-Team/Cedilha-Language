#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    char * x = "ola!";
    
    char * str = (char *) malloc(10);
    sprintf(str, "%s", "teste");
   
    char * str1 = (char *) malloc(10);
    sprintf(str1, "%s %s", " teste", "será?");
    
    
    strcat(str,str1); 
   
    printf("BlocoPrincipal {\n %s\n }\n",str);

    
    return 0;
}