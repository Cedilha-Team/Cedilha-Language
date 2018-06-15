%{
#include <stdio.h>
#include <string.h>
#include "./estruturas/pilha/pilha.h"
#include "./estruturas/tabelahash/tabelaHash.h"
#include "attrib.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;


Pilha scope_stack;
HashTable symbol_table;

/*usado para contarqual bloco está*/
int forCounter;
int ifCounter;
int whileCounter;

static struct AllAttributes *value;

%}

%union {
	struct AllAttributes * value;
	char* sValue; /* string value */
}

%token <sValue> ID LIT_TEXTO LIT_BOOL LIT_REAL LIT_INT
%token BPRINCIPAL BFUNCOES FUNCAO BOOL
%token TEXTO CARACTERE REAL INTEIRO VETOR MEU_TIPO CERQUILHA
%token SE IMPRIME LEIA INCLUIR PARE ENQUANTO PROC PARA EXECUTE SENAO CONSTANTE RETORNE
%token ASPAS_DUPLAS ASPAS_SIMPLES LCOLCHETE RCOLCHETE LCHAVE RCHAVE LPARENTESES RPARENTESES
%token MENORIGUAL MAIORIQUAL IGUAL DIFERENTE MAIOR MENOR ATRIB ATRIB_SOMA ATRIB_SUB ATRIB_MULT ATRIB_DIV ATRIB_MOD
%token NEGACAO INC DEC E_LOG OU_LOG ARROBA VIRGULA PONTOVIRGULA
%token MULT SUB SOMA DIV MOD EXP


%left	SOMA	MENOS
%left	MULT	DIV    MOD
%right	EXP

%start programa

%type <value> programa termo literal
%%

programa : {pushScope("global","void");} termo {popScope(&scope_stack,"global");}
         ;

termo : ID       { struct AllAttributes * info = 
    				attrib_new("TODO Procurar na pilha", "TODO Procurar na pilha",  $1);
					$$ = info;}
				  
      | literal  { struct AllAttributes * info = 
    				attrib_new("TODO Procurar na pilha", "TODO Procurar na pilha",  $1->code);
					$$ = info;}
      ;
      

literal : LIT_REAL  {struct AllAttributes * info = 
    				attrib_new("TODO Procurar na pilha", "TODO Procurar na pilha",  $1);
					$$ = info;}
		| LIT_BOOL  {struct AllAttributes * info = 
    				attrib_new("TODO Procurar na pilha", "TODO Procurar na pilha",  $1);
					$$ = info;}
		| LIT_INT   {struct AllAttributes * info = 
    				attrib_new("TODO Procurar na pilha", "TODO Procurar na pilha",  $1);
					$$ = info;}
 		| LIT_TEXTO {struct AllAttributes * info = 
    				attrib_new("TODO Procurar na pilha", "TODO Procurar na pilha",  $1);
					$$ = info;}
		;
%%

int main (void) {
	
	iniciar(&scope_stack);
	init_array(&symbol_table,50);
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "-- %d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}


int pushScope(char* scope, char* type){
		
	if(procurar(&scope_stack, scope, type)<0){
		empilhar(&scope_stack,scope,type);
		printf("tamanho:%d\n",scope_stack.tamanho);
	}
	mostrar(&scope_stack);
}

int popScope(){

	if(desempilhar(&scope_stack)<0){
		printf("pilha vazia\n");
	}else{
		printf("pop com sucesso\n");
		printf("tamanho:%d \n",scope_stack.tamanho);
	}
}

char* formarNome(char* escopoPai, char*nome, char*ordem){
	char* str = (char*) malloc(strlen(escopoPai)+strlen(nome)+strlen(ordem));
	strcpy(str,escopoPai);
	strcat(str,nome);
	strcat(str,ordem);
	
	return str;
}

/*
int insertSymbolTable(HashTable* hashTable,char*name, char*scope,char*type){
	char* key = (char*) malloc(strlen(scope)+strlen(id));
	strcpy(key,scope);
	strcat(key,name);
	Symbol *item = createSymbol(key,name,scope,type);
	return insert(&symbol_table,&item);
}
*/

/*void check_type(char* identifier, char* scope){
	char* key = (char*) malloc( strlen(identifier) + strlen(scope) );
	
	strcpy(key,identifier);
	strcat(key,scope);
	
	int i;
	int rows = 100;
	char** table = (char*)malloc(rows*sizeof(char*));
	
	for(i=0; i< rows; i++){
		if(table[i] == NULL){
			table[i] = info;
		}
	}

}*/
