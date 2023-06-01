#include<stdio.h>
	int main(){
		int a,b,c;
		float r,s,d;
		
		printf("insira o primeiro numero:\n");
		scanf("%i", &a);
		
		printf("insira o segundo numero:\n");
		scanf("%i", &b);
		
		printf("insira o terceiro numero:\n");
		scanf("%i", &c);
		
		r = a*a + 2*a*b + b*b;
		s = b*b + 2*b*c + c*c;
		d = (r+s)/2;
		
		printf("o resultado da expressao eh: %.2f", d);
		
		return 0;
		
		
	}
