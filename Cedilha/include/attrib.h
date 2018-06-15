#ifndef ATT_H
#define ATT_H

#include "../y.tab.h"


struct AllAttributes {
	char * subprogram;
	char * type;
	char * code;
};

struct AllAttributes *attrib_new(char *subprogram, char* type, char* code);
void attrib_destroy(struct AllAttributes *);

#endif