#include<stdio.h>
	int main(){
		
		float preco, peca, area;
		
		printf("insira o valor da area em metros quadrados:\n");
		scanf("%f", &area);
		
		peca = area*4;
		preco = area*7;
		
		printf("a quantidade de pecas eh: %.2f\n", peca);
		printf("o valor total eh: %.2f", preco);
		return 0;
	}
