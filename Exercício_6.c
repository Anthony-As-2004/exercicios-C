#include<stdio.h>
	int main(){
		
		float conta, refeicao;
		
		printf("insira o valor da refeicao:\n");
		scanf("%f", &refeicao);
		
		conta = (refeicao/10);
		
		printf("o valor da taxa eh:%.2f", conta);
	}
