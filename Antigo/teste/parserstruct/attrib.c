#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "attrib.h"
//#include "typecheck_visitor.h"

struct AllAttributes *
attrib_new(char *subprogram, char* type, char* code)
{
    int i;
    struct AllAttributes *attrib;

    attrib = (struct AllAttributes *) malloc (sizeof(struct AllAttributes));

    if (subprogram != NULL){
        attrib->subprogram = strdup(subprogram);
    } else
        attrib->subprogram = NULL;

    if (type != NULL){
        attrib->type = strdup(type);
    } else
        attrib->type = NULL;
        
    if (code != NULL){
        attrib->code = strdup(code);
    } else
        attrib->code = NULL;
        

    return attrib;
}

void
attrib_destroy(struct AllAttributes *self)
{
    if (self != NULL) {
        if(self->subprogram != NULL)
            free(self->subprogram);
        if(self->type != NULL)
            free(self->type);
        if(self->code != NULL)
            free(self->code);
        free(self);
    }
}
