#include <stdio.h>

int main()
{
   
    
    double x, y, result;
    int c;
      
    printf("Digite o valor de X: ");
    scanf("%lf",&x);
    
    printf("Digite o valor de Y: ");
    scanf("%lf",&y);
    
    printf("Digite o valor de C: ");
    scanf("%d",&c);
    
    result = (x*x) - y + c;
    
    printf("O resultado da operacao eh %.2lf\n",result);
    return 0;
}