#include <stdio.h>
#include <stdlib.h>
int** alocarMatriz(int Linhas,int Colunas);

int main()
{
    int al, ac, bl, bc, cl, cc;
    int **a, **b, **c, **d;
     int i, j, k,aux,  sum; 
        i = 0; j = 0;
    printf("Digite a quantidade de Linhas da Matriz A: ");
    scanf("%d",&al);
    
    printf("Digite a quantidade de Colunas da Matriz A: ");
    scanf("%d",&ac);
    
    printf("Digite a quantidade de Linhas da Matriz B: ");
    scanf("%d",&bl);
    
    printf("Digite a quantidade de Colunas da Matriz B: ");
    scanf("%d",&bc);
    
    a = alocarMatriz(al, ac);
    b = alocarMatriz(bl, bc);
    linhaA: if(i < al){
            //printf(" Tou na linha %d e coluna %d", i, j );
            colunaA: if(j < ac){
                printf("Elemento [%d][%d]: ", i+1, j+1);
                scanf("%d",&aux);
                a[i][j] = aux;
                j++;
                if(j < ac){
                    //printf("Vou para coluna");
                    goto colunaA;
                }
                if(j == ac){
                    //printf("Vou para Linha");
                    i++;
                    j = 0;
                    //printf("Linha eh %d", i);
                    goto linhaA;
                }
            }
        }
        
        i = 0; j = 0;
        linhaB: if(i < bl){
            //printf(" Tou na linha %d e coluna %d", i, j );
            colunaB: if(j < bc){
                printf("Elemento [%d][%d]: ", i+1, j+1);
                scanf("%d",&aux);
                b[i][j] = aux;
                j++;
                if(j < bc){
                    //printf("Vou para coluna");
                    goto colunaB;
                }
                if(j == bc){
                    //printf("Vou para Linha");
                    i++;
                    j = 0;
                    //printf("Linha eh %d", i);
                    goto linhaB;
                }
            }
        }
    
    
    if(ac == bl){
        
        cl = al; 
        cc = bc;
        c = alocarMatriz(cl, cc);
       
        
        
        
        i = 0;
        j = 0;
        k = 0;
        sum =0;
        
        linhaC: if(i <cl){
            colunaC: if(j < cc ) {
                multiInterno: if(k < bl) {
                    sum = sum+ a[i][k] * b[k][j];
                    k++;

                    if(k < bl){
                        goto multiInterno;
                    }
                    if(k == bl){
                        c[i][j] = sum;
                        sum = 0;
                        j++;
                        k = 0;
                        if(j == cc){
                            i++;
                            j = 0;
                            k = 0;
                            goto linhaC;
                        }
                        goto colunaC;
                    }
                }
            }
            
        }
        
        i = 0; j = 0;
        ImprimirlinhaC: if(i < cl){
            //printf("Vou imprimir \n");
            ImprimircolunaC: if(j < cc){
                printf("%d ", c[i][j]);
                j++;
                if(j < cc){
                    goto ImprimircolunaC;
                }
                if(j == cc){
                    i++;
                    j = 0;
                    printf("\n");
                    goto ImprimirlinhaC;
                }
            }
        }
        
    }
    
    if(al == bl && ac == bc){
         i = 0; j = 0;
        printf("É possível somar \n");
        d = alocarMatriz(al, bl);
         somaLinha: if(i < al){
            //printf(" Tou na linha %d e coluna %d", i, j );
            somaColuna: if(j < ac){
                printf("Elemento a[%d][%d]: %d \n", i+1, j+1, a[i][j]);
                d[i][j] = a[i][j]+b[i][j];
                j++;
                if(j < ac){
                    //printf("Vou para coluna");
                    goto somaColuna;
                }
                if(j == ac){
                    //printf("Vou para Linha");
                    i++;
                    j = 0;
                    //printf("Linha eh %d", i);
                    goto somaLinha;
                }
            }
        }
        
        
        printf("Soma da Matriz \n");
        
         i = 0; j = 0;
        imprimirLinhaSoma: if(i < al){
            //printf("Vou imprimir \n");
            imprimirColunaSoma: if(j < ac){
                printf("%d ", d[i][j]);
                j++;
                if(j < ac){
                    goto imprimirColunaSoma;
                }
                if(j == ac){
                    i++;
                    j = 0;
                    printf("\n");
                    goto imprimirLinhaSoma;
                }
            }
        }
    }
    
    
    if(al != bl || ac != bc){
        printf("Não é possível somar as matrizes");
    }
    
    
    
    
    if(ac!=bl){
        printf("Nao eh multi");
    }
    
     
    
    return 0;
}


int** alocarMatriz(int Linhas,int Colunas){ //Recebe a quantidade de Linhas e Colunas como Parâmetro
 
  int i,j; //Variáveis Auxiliares
 
  int **m = (int**)malloc(Linhas * sizeof(int*)); //Aloca um Vetor de Ponteiros
  //printf("alocado primeiro vetor");
 
  for (i = 0; i < Linhas; i++){ //Percorre as linhas do Vetor de Ponteiros
       m[i] = (int*) malloc(Colunas * sizeof(int)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros.
       for (j = 0; j < Colunas; j++){ //Percorre o Vetor de Inteiros atual.
            m[i][j] = 0; //Inicializa com 0.
       }
  }
  return m; //Retorna o Ponteiro para a Matriz Alocada
}
