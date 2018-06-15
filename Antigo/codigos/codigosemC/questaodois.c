/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int** alocarMatriz(int Linhas,int Colunas);

int main()
{
    int al, ac, bl, bc, cl, cc;
    int **a, **b, **c;
    printf("Digite a quantidade de Linhas da Matriz A: ");
    scanf("%d",&al);
    
    printf("Digite a quantidade de Colunas da Matriz A: ");
    scanf("%d",&ac);
    
    printf("Digite a quantidade de Linhas da Matriz B: ");
    scanf("%d",&bl);
    
    printf("Digite a quantidade de Colunas da Matriz B: ");
    scanf("%d",&bc);
    
    if(ac == bl){
        a = alocarMatriz(al, ac);
        b = alocarMatriz(bl, bc);
        cl = al; 
        cc = bc;
        c = alocarMatriz(cl, cc);
        int i, j, k,aux,  sum; 
        i = 0; j = 0;
        
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
        
        i = 0;
        j = 0;
        k = 0;
        sum =0;
        
        linhaC: if(i <cl){
             //printf("Entrei na linhaC \n");
             //printf("linhaC para i=%d, j=%d, k=%d \n", i, j, k);
            colunaC: if(j < cc ) {
                //printf("Entrei na ColunaC  \n");   
                
               
                
                multiInterno: if(k < bl) {
                    //printf("Entrei no MultiInterno  \n");
                    //printf("Valor de a[%d][%d]=%d, b[%d][%d]=%d \n", i+1,k+1, a[i][k], k+1, j+1, b[k][j]);
                    sum = sum+ a[i][k] * b[k][j];
                    k++;

                    if(k < bl){
                        //printf("MI estou no i=%d, j=%d, k=%d \n", i, j, k);
                        goto multiInterno;
                    }
                    if(k == bl){
                       
                        //printf("Valor da soma Total é: %d \n", sum);
                        //printf("Voltar para COluna C, eo valor de J eh: %d \n", j);
                        
                        c[i][j] = sum;
                        //printf("Valor de c[%d][%d]=%d \n", i+1,j+1, c[i][j]);
                        //printf("K=bl estou no i=%d, j=%d, k=%d \n", i, j, k);
                        sum = 0;
                        j++;
                        k = 0;
                        //printf("foi para i=%d, j=%d, k=%d \n", i, j, k);
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
                    //printf("Vou para coluna");
                    goto ImprimircolunaC;
                }
                if(j == cc){
                    //printf("Vou para Linha \n");
                    i++;
                    j = 0;
                    printf("\n");
                    //printf("Linha eh %d", i);
                    goto ImprimirlinhaC;
                }
            }
        }
        
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
  //printf(" retornando");
    return m; //Retorna o Ponteiro para a Matriz Alocada
}
