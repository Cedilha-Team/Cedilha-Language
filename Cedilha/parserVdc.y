%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "./include/pilha.h"
#include "./include/tabelaHash.h"
#include "./include/attrib.h"
#include "./include/memoryBank.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;

Pilha scope_stack;
HashTable symbol_table;
FILE *fp;

/*usado para contar qual bloco está*/
int forCounter;
int ifCounter;
int whileCounter;
int elseCounter;
int doWhileCounter;


void pushBlockScope(char*nome, int ordem);
void inicializaContadores();
int checkBeforeDeclaration(char* name);
int insertSymbolTable(char*name,char*type);



%}

%union {
	char * sValue;  /* string value */
};

%token <sValue> ID LIT_TEXTO LIT_BOOL LIT_REAL LIT_INT
%token <sValue> MENORIGUAL MAIORIQUAL IGUAL DIFERENTE MAIOR MENOR ATRIB ATRIB_SOMA ATRIB_SUB ATRIB_MULT ATRIB_DIV ATRIB_MOD
%token <sValue> NEGACAO INC DEC E_LOG OU_LOG ARROBA MULT SUB SOMA DIV MOD EXP
%token <sValue> BOOL TEXTO CARACTERE REAL INTEIRO PARE
%token ASPAS_DUPLAS ASPAS_SIMPLES LCOLCHETE RCOLCHETE LCHAVE RCHAVE LPARENTESES RPARENTESES
%token SE IMPRIMA LEIA ENQUANTO  PARA EXECUTE SENAO CONSTANTE RETORNE
%token VIRGULA PONTOVIRGULA MEU_TIPO BPRINCIPAL BFUNCOES FUNCAO PROC VETOR CERQUILHA

%left	SOMA	SUB
%left	MULT	DIV    MOD
%right	EXP

%start programa

%type <sValue> bloco_principal termo literal imprime leia sentencas sentenca tipo tipo_primitivo declaracao expressao 
operador_unario operador_binario operador_relacional operador_aritmetico operador_booleano comando atribuicao
atribuicao_binaria atribuicao_unaria controle bloco_se se_simplificado
bloco_enquanto bloco_faca_enquanto bloco_para repeticao declaracao_para comando_para
assinaturas assinatura_funcoes assinatura_funcao assinatura_proc parametro parametros   
bloco_funcoes funcoes_proc definicoes_funcoes_proc definicao_funcao definicao_procedimento
chamada_funcao parametros_chamada parametro_chamada declaracoes declaracao_global
tamanho_vetor termos ids_leia retorne declaracao_registro tipo_vetor tipo_registro
%%

programa : {pushScope("global","void");}
			declaracoes {fprintf(fp,"%s\n",$2);}
			assinatura_funcoes {fprintf(fp,"%s\n",$4);} 
			bloco_principal bloco_funcoes {popScope();}
         ;

declaracoes :	{printf("declaracoes inicio\n;");
				create_pointer(char,str,2);
					test(str){
						strcpy(str, " ");
						$$ = str;
						printf("declaracoes fim\n;");
					}
					
				}
			| declaracao_global PONTOVIRGULA declaracoes	
				{printf("declaracoes inicio\n;");int tamanho = 4 + strlen($1) + strlen($3);
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "%s;\n %s", $1, $3); 
					$$ = str;
					printf("declaracoes fim\n;");
				}
				}
			;
			
declaracao_global : declaracao				{$$ = $1;}
				  | declaracao_registro 	{$$ = $1;}
				  ;
				

declaracao_registro :	MEU_TIPO ID LCHAVE {pushScope($2,"MeuTipo");} 
						parametros {popScope();} RCHAVE	
						{if(insertSymbolTable){
							int tamanho = 13 + strlen($2) + strlen($5);
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "MeuTipo %s {\n%s\n}",$2,$5);
								$$ = str;
							}
						}
						}
					;										


assinatura_funcoes  :	{create_pointer(char,str,2);
						test(str){
							strcpy(str, " ");
							$$ = str;
						}
						}
					| assinaturas PONTOVIRGULA assinatura_funcoes 	
						{int tamanho = 4 + strlen($1) + strlen($3);
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s;\n %s", $1, $3);
							$$ = str;
						}
						}
					;

assinaturas : assinatura_proc   {$$ = $1;}
			| assinatura_funcao {$$ = $1;}
			;
					
assinatura_funcao : FUNCAO tipo ID LPARENTESES {pushScope($3,$2);}
					parametros {popScope();} RPARENTESES	
						{	if(insertSymbolTable($3,$2)){
								int tamanho = 12 + strlen($2) + strlen($3) +strlen($6);
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "Funcao %s %s (%s)", $2, $3, $6);
									$$ = str;
								}
							}
						}
				  ;
				  
assinatura_proc :	PROC ID LPARENTESES {pushScope($2,"void");}
					parametros {popScope();} RPARENTESES	
					{	if(insertSymbolTable($2,"void") ){
							int tamanho = 9 + strlen($2) + strlen($5);
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "Proc %s (%s)", $2,$5); 
								$$ = str;
							} 
						}
					}
				;
				
parametros :	{create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					$$ = str;
				}
				}
           | parametro VIRGULA parametros	
        		{	int tamanho = 3 + strlen($1) + strlen($3);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s, %s", $1, $3); 
						$$ = str;
					}
					
				}
           | parametro {$$ = $1;}
           ;

parametro  : tipo ID   {	if(insertSymbolTable($2, $1) ){
								int  tamanho = 1+strlen($1)+strlen($2);
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "%s%s",$1,$2);
									$$ = str;
								}
							} 
						}
			;
					
bloco_funcoes  :	{create_pointer(char,str,2);
					test(str){
						strcpy(str," ");
						$$ = str;
					}
					}
            	| BFUNCOES LCHAVE funcoes_proc RCHAVE  
            		{	int tamanho = 17 + strlen((char *)$3);
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s%s\n}", "BlocoFuncoes {\n", (char *) $3); 
							fprintf(fp,"%s\n",str); 
						}
					} 								   
				;
				
funcoes_proc :	{create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					$$ = str;
				}
				}
			 | definicoes_funcoes_proc funcoes_proc 
				{	int  tamanho = 1+strlen($1)+strlen($2);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s%s",$1,$2);
						$$ = str;
					}
				 
				}
			 ;

definicoes_funcoes_proc : definicao_funcao			{$$ = $1;}
						| definicao_procedimento	{$$ = $1;}
						;

definicao_funcao : FUNCAO tipo ID LPARENTESES parametros RPARENTESES 
								LCHAVE {inicializaContadores(); pushScope($3,$2);} 
										sentencas {popScope();} 
								RCHAVE	{int tamanho = 17+strlen($2) + strlen($3) + strlen($5)+strlen($9);
										create_pointer(char,str,tamanho);
										test(str){
											sprintf(str, "Funcao %s %s (%s) {\n%s\n}", $2, $3, $5, $9); 
											$$ = str;
										}
										}
				 ;

definicao_procedimento : PROC ID LPARENTESES parametros RPARENTESES 
								LCHAVE {inicializaContadores();pushScope((char*)$2,"void");}
								sentencas {popScope();} RCHAVE	{int tamanho = 14 + strlen($2) + strlen($4) + strlen($8);
																	create_pointer(char,str,tamanho);
																	test(str){
																		sprintf(str, "Proc %s (%s) {\n%s\n}", $2, $4, $8); 
																		$$ = str;
																	}
																	}
				 ;

chamada_funcao : ID  LPARENTESES parametros_chamada RPARENTESES	{int tamanho = 3+strlen($1) + strlen($3);
																create_pointer(char,str,tamanho);
																test(str){
																	sprintf(str, "%s(%s)", $1, $3); 
																	$$ = str;
																} 
																} 
			   ;

retorne : RETORNE expressao		{int tamanho = 9 + strlen($2);
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "Retorne %s", $2); 
									$$ = str;
								} 
								}
		;
		
parametros_chamada: 												{create_pointer(char,str,2);
																	test(str){
																		strcpy(str, " ");
																		$$ = str;
																	}
																	}
		           | parametro_chamada VIRGULA parametros_chamada	{int tamanho = 3 + strlen($1)+ strlen($3);
																	create_pointer(char,str,tamanho);
																	test(str){
																		sprintf(str, "%s, %s", $1, $3); 
																		$$ = str;
																	} 
																	}
		           | parametro_chamada								{$$ = $1;}
        			;
        			
parametro_chamada: ARROBA termo    {int  tamanho = 1+strlen($1)+strlen($2);
									create_pointer(char,str,tamanho);
									test(str){
										sprintf(str, "%s%s",$1,$2);
										$$ = str;
									} 
									}
	    		  | termo   		{$$ = $1;}
	    		 ;
		  
		  

					
bloco_principal : BPRINCIPAL LCHAVE 
								{inicializaContadores(); pushScope("main","void");} 
								sentencas {popScope();} 
							RCHAVE  {fprintf(fp,"BlocoPrincipal {\n%s}\n",$4); 
									}
				;



sentencas:									{create_pointer(char,str,2);
											test(str){
												strcpy(str, " ");
												$$ = str;
											}
											}
		 | sentenca PONTOVIRGULA sentencas {int tamanho = 3 + strlen($1)+ strlen($3);
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "%s;\n%s", $1, $3); 
												$$ = str;
											} 
											}
		 ;

sentenca: comando   {$$ = $1;}
		| controle  {$$ = $1;}
		| repeticao {$$ = $1;}
		;

controle : bloco_se 		{$$ = $1;}
		 | PARE     		{$$ = $1;}
		 ;
		 
bloco_se : se_simplificado		{$$ = $1;}
		| se_simplificado SENAO LCHAVE {pushBlockScope("senao",elseCounter);
										elseCounter++;
										} 
			sentencas {popScope();} RCHAVE {int tamanho = 12 + strlen($1)+ strlen($5);
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "%s\nSenao {\n%s\n}", $1, $5);
												$$ = str;
											}  
											}
		| se_simplificado SENAO bloco_se			{int tamanho = 7 + strlen($1) + strlen($3);
													create_pointer(char,str,tamanho);
													test(str){
														sprintf(str, "%s\nSenao%s", $1, $3);
														$$ = str;
													}  
													}
		;		 

se_simplificado : SE LPARENTESES expressao RPARENTESES EXECUTE 
					LCHAVE {pushBlockScope("se",ifCounter);
							ifCounter++; }
					sentencas {popScope();} RCHAVE	{	int tamanho = 5 + strlen($3) + strlen($8);
														create_pointer(char,str,tamanho);
														test(str){
															sprintf(str, "Se (%s) Execute {\n%s\n}", $3, $8);
															$$ = str;
														} 
														}
				;

comando	 : declaracao 		{$$ = $1;}
		 | imprime			{$$ = $1;}
		 | leia 			{$$ = $1;}
		 | expressao		{$$ = $1;}
         | atribuicao		{$$ = $1;}
         | chamada_funcao	{$$ = $1;}
         | retorne			{$$ = $1;}	
         ;

atribuicao : ID atribuicao_unaria				{int tamanho = 2 + strlen($1) + strlen($2);
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "%s %s", $1, $2);
													$$ = str;
												} 
												}
		   | ID atribuicao_binaria expressao	{int tamanho = 3 + strlen($1) + strlen($2) + strlen($3);
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "%s %s %s", $1, $2, $3); 
													$$ = str;
												} 
												}
		   ;
		   
atribuicao_binaria : ATRIB		{$$ = $1;}
				   | ATRIB_SOMA {$$ = $1;}
				   | ATRIB_SUB  {$$ = $1;}
				   | ATRIB_MULT {$$ = $1;}
				   | ATRIB_DIV  {$$ = $1;}
				   | ATRIB_MOD  {$$ = $1;}
                   ;

atribuicao_unaria	: INC {$$ = $1;}
					| DEC {$$ = $1;}
    				;

repeticao : bloco_enquanto       {$$ = $1;}
		  | bloco_faca_enquanto  {$$ = $1;}
		  | bloco_para           {$$ = $1;}
		  ;

bloco_enquanto : ENQUANTO LPARENTESES expressao RPARENTESES EXECUTE 
				 LCHAVE 	{pushBlockScope("enquanto",whileCounter);
							whileCounter++;}
				sentencas {popScope();} RCHAVE {int tamanho = 25 + strlen($3) + strlen($8);
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "Enquanto (%s) Execute {\n%s\n}", $3, $8); 
													$$ = str;
												}
												}
				;
			   
bloco_faca_enquanto : EXECUTE LCHAVE {	pushBlockScope("facaenquanto",doWhileCounter);
										doWhileCounter++;}
					sentencas {popScope();} 
					RCHAVE ENQUANTO LPARENTESES expressao RPARENTESES {	int tamanho = 25 + strlen($4) +strlen($9);
																		create_pointer(char,str,tamanho);
																		test(str){
																			sprintf(str, "Execute {\n%s\n} Enquanto (%s)", $4, $9); 
																			$$ = str;
																		} 
																	  }
			        ;
			   
bloco_para : PARA LPARENTESES {pushBlockScope("para",forCounter);
								forCounter++;} 
			declaracao_para {popScope();} PONTOVIRGULA
			expressao PONTOVIRGULA comando_para RPARENTESES 
			EXECUTE LCHAVE sentencas RCHAVE 		{int tamanho = 22 + strlen($4) + strlen($7) + strlen($9) + strlen($13);
													create_pointer(char,str,tamanho);
													test(str){
														sprintf(str, "Para (%s;%s;%s) Execute{\n%s\n}", $4, $7, $9, $13); 
														$$ = str;
													} 
													}
		   ;			   

declaracao_para:			{create_pointer(char,str,2);
							test(str){
								strcpy(str, " ");
								$$ = str;
							}
							}
				| declaracao {$$ = $1;}
				;

comando_para :			{create_pointer(char,str,2);
						test(str){
							strcpy(str, " ");
							$$ = str;
						}
						}
			 | comando	{$$ = $1;}
			 ;

imprime : IMPRIMA LPARENTESES termos RPARENTESES	{int tamanho = 10 + strlen($3);
													create_pointer(char,str,tamanho);
													test(str){
														sprintf(str, "Imprima(%s)", $3); 
														$$ = str;
													} 
													} 
		;

leia	: LEIA LPARENTESES ids_leia RPARENTESES	{int tamanho = 7 + strlen($3);
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "Leia(%s)", $3);  
												$$ = str;
											} 
											}
		;
 
declaracao : tipo ID					{if(insertSymbolTable($2,$1)){
											int tamanho = 2 + strlen($1) + strlen($2);
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "%s %s", $1, $2);   
												$$ = str;
											}
										}else{
											yyerror("nome de variável já foi declarada!\n");
										} 
										}  
			| tipo ID ATRIB expressao	{int tamanho = 4 + strlen($1)+ strlen($2) + strlen($3) + strlen($4);
									    create_pointer(char,str,tamanho);
										test(str){
											sprintf(str, "%s %s %s %s", $1, $2, $3, $4); 
											$$ = str;
										}
										}
			
			;


expressao	: termo {$$ = $1;}
			| operador_unario expressao	{int tamanho = 2 + strlen($1) + strlen($2);
										create_pointer(char,str,tamanho);
										test(str){
											sprintf(str, "%s %s", $1, $2); 
											$$ = str;
										} 
										}
			| termo operador_binario expressao {int tamanho = 3 + strlen($1) + strlen($2) + strlen($3);
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "%s %s %s", $1, $2, $3); 
													$$ = str;
												} 
												}
			| LPARENTESES expressao RPARENTESES {int tamanho = 3 + strlen($2);
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "(%s)", $2);
													$$ = str;
												} 
												}
			| chamada_funcao operador_binario expressao 	{int tamanho = 3 + strlen($1) + strlen($2) + strlen($3);
															create_pointer(char,str,tamanho);
															test(str){
																sprintf(str, "%s %s %s", $1, $2, $3); 
																$$ = str;
															} 
															}
			;

operador_unario :	SUB					{$$ = $1;}
				|	NEGACAO				{$$ = $1;}
				|	ARROBA				{$$ = $1;}
				;

operador_binario	: operador_booleano    {$$ = $1;}
					| operador_relacional  {$$ = $1;}
					| operador_aritmetico  {$$ = $1;}
		            ;	
		            
operador_relacional  : MENORIGUAL   		 {$$ = $1;}
					 | MAIORIQUAL            {$$ = $1;} 
					 | IGUAL                 {$$ = $1;}
					 | DIFERENTE             {$$ = $1;}
					 | MAIOR                 {$$ = $1;}
					 | MENOR                 {$$ = $1;}
					 ;
					 
operador_aritmetico : MULT                  {$$ = $1;}
				    | DIV                   {$$ = $1;}
				    | MOD                   {$$ = $1;}
				    | EXP                   {$$ = $1;}
				    | SUB                   {$$ = $1;}
				    | SOMA                  {$$ = $1;}
				    ;
				 
operador_booleano : E_LOG		        	{$$ = $1;}
					| OU_LOG	            {$$ = $1;}
					;

tipo : tipo_primitivo	{$$ = $1;}
	 | tipo_vetor       {$$ = $1;}
	 | tipo_registro	{$$ = $1;}
	 ;
	 
tipo_registro : MEU_TIPO ID		{int tamanho = 9+strlen($2);
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "MeuTipo %s", $2);
									$$ = str;
								}
								}
			  ;

tipo_vetor : VETOR tipo_primitivo tamanho_vetor tamanho_vetor	{int tamanho = 8+strlen($2)+ strlen($3) +strlen($4);
																create_pointer(char,str,tamanho);
																test(str){
																	sprintf(str, "Vetor %s %s%s", $2, $3, $4);
																	$$ = str;
																}
																}
	        | VETOR tipo_primitivo tamanho_vetor 	{int tamanho = 8+strlen($2)+strlen($3);
													create_pointer(char,str,tamanho);
													test(str){
														sprintf(str, "Vetor %s %s", $2, $3);
														$$ = str;
													}
													}
			;

tamanho_vetor : LCOLCHETE termo RCOLCHETE	{int tamanho = 3+strlen((char*)$2);
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "[%s]",$2);
												$$ = str;
											}
											}
			  ;

tipo_primitivo : INTEIRO 	{$$ = $1;}
			   | REAL 		{$$ = $1;}
			   | CARACTERE	{$$ = $1;}
			   | TEXTO		{$$ = $1;}
			   | BOOL		{$$ = $1;}
			   ;

termos : termo					{$$ = $1;}
	   | termo VIRGULA termos	{int tamanho = strlen($1) + strlen($3) + 3;
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "%s, %s", $1, $3);
									$$ = str;
								}
								}
	   ;
	   
ids_leia : ID			 {$$ = $1;}
	| ID VIRGULA ids_leia	{int tamanho = 3+strlen($1)+strlen($3);
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "%s, %s",$1,$3);
								$$ = str;
							}
							}
	;
			   
termo : ID       { $$ = $1;}
      | literal  {$$ = $1;}
      ;
      

literal : LIT_REAL  {$$ = $1;}
		| LIT_BOOL  {$$ = $1;}
		| LIT_INT   {$$ = $1;}
 		| LIT_TEXTO {$$ = $1;}
		;
%%

int main (void) {
	startMemoryBank();
	fp = fopen("result.c", "w+");
	iniciar(&scope_stack);
	init_array(&symbol_table,50);
	
	
	int resultado = yyparse ( );
	
	fclose(fp);
	stopMemoryBank();
	return resultado;
}

int yyerror (char *msg) {
	fprintf (stderr, "-- %d: %s at '%s'\n", yylineno, msg, yytext);
	//destrua conteudo e fecha arquivo e exit
	printf("%s\n",msg);

	return 0;
}


int pushScope(char* scope, char* type){
		
	if(procurar(&scope_stack, scope, type)<0){
		empilhar(&scope_stack,scope,type);
		printf("tamanho da pilha apos push:%d\n",scope_stack.tamanho);
	}
	mostrar(&scope_stack);
}

int popScope(){

	if(desempilhar(&scope_stack)<0){
		printf("pilha vazia\n");
	}else{
		printf("pop! tamanho da pilha:%d \n",scope_stack.tamanho);
	}
}

int numdigits(int n){
	int count = 1; /* bound to be at least one digit! */
	while(n != 0){
		n /= 10;
		++count;
	}
	return count;
}

void pushBlockScope(char*nome, int ordem){
	//Pega o item do topo da lista que guarda o escopo atual
	ElementoTipoNome * item = mostrarTopo(&scope_stack);
	create_pointer(char,escopoPai,strlen(item->scopeName));
	test(escopoPai){
		strcpy(escopoPai,item->scopeName);
	}
	
	//Alocando para guardar a ordem
	create_pointer(char,ordemStr,numdigits(ordem));
	test(ordemStr){
		sprintf(ordemStr, "%d", ordem);
	}
	
	int tamanho = strlen(escopoPai) + strlen(nome)+strlen(ordemStr)+1;
	create_pointer(char,resultado,tamanho);
	test(resultado){
		strcpy(resultado,escopoPai);
		strcat(resultado,nome);
		strcat(resultado,ordemStr);
		printf("nome do escopo adicionado na pilha: %s\n",resultado);
		
		//coloca na pilha
		pushScope(resultado,"void");
	}
}

void inicializaContadores(){
	forCounter = 0;
	ifCounter= 0;
	whileCounter= 0;
	elseCounter = 0;
	doWhileCounter = 0;
}

int insertSymbolTable(char*name,char*type){
	int tamanho = strlen(mostrarTopo(&scope_stack)->scopeName)+strlen(name)+1;
	create_pointer(char,key,tamanho);
	test(key){
		strcpy(key,mostrarTopo(&scope_stack)->scopeName);
		strcat(key,name);
	}
	
	Symbol *item = createSymbol(key,name,mostrarTopo(&scope_stack)->scopeName,type);
	int result = insert(&symbol_table,item);
	
	
	if(result){
		printf("variavel inserida na tabela de simbolo. tamanho da hash: %d\n",symbol_table.size);
		return 1;
	}else{
		create_pointer(char,errormsg,50);
		test(errormsg){
			sprintf(errormsg, "Na função ‘%s’:\n erro: redeclaração de ‘%s’",
					mostrarTopo(&scope_stack)->scopeName,name);
			printf("%s",errormsg);
			yyerror(errormsg);
			
		}
	}
	
}

int checkBeforeDeclaration(char* name){
	
	int keysize = strlen(name) + strlen(mostrarTopo(&scope_stack)->scopeName)+1;
	create_pointer(char,key,keysize);
	test(key){
		strcpy(key,mostrarTopo(&scope_stack)->scopeName);
		strcat(key,name);
	}
	
	Symbol * item = findHashTable(&symbol_table,key);
	if(item!=NULL){
		printf("ok, variavel ja foi declarada\n");
		return 1;
	}else{
		create_pointer(char,errormsg,50);
		test(errormsg){
			sprintf(errormsg, "Na função ‘%s’:\n erro: ‘%s’ não declarada (primeiro uso nesta função)\n",
					mostrarTopo(&scope_stack)->scopeName,name);
			printf("erro: %s",errormsg);
			yyerror(errormsg);
			
		}
		
		
	}
}

/*
void check_type(char* identifier, char* scope){
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