 #include <stdio.h>

 
 
int main() {
	double x;
		double y;
		double resultado;
		double c;
		printf("%s","Digite o numero Real X:");
		scanf("%lf",&x);
		printf("%s","Digite o numero Real Y:");
		scanf("%lf",&y);
		printf("%s","Digite o numero Inteiro c:");
		scanf("%lf",&c);
		resultado = c - y + (x * x);
		printf("%s","O resultado da operacao eh: ");printf("%lf",resultado);
	 
return 0;
}
