#include<stdio.h>

int main(){
	int n1, n2, soma, sub, multi, divi;
	printf("insira um valor:\n");
	scanf("%i", &n1);
	printf("insira outro valor:\n");
	scanf("%i", &n2);
	soma = n1 + n2;
	sub = n1 - n2;
	multi = n1*n2;
	divi = n1/n2;
	
	printf("a soma eh %i\n", soma);
	printf("a subtracao eh %i\n", sub);
	printf("a multiplicacao eh %i\n", multi);
	printf("a divisao eh %i\n", divi);
	return 0;
	

}
