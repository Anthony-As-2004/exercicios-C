#include<stdio.h>
	int main(){
		
		float id, fixo, vendas, percentual, total;
		
		printf("insira o numero de identificacao do vendedor\n");
		scanf("%f", &id);
		
		printf("insira o salario:\n");
		scanf("%f", &fixo);
		
		printf("insira o numero de vendas:\n");
		scanf("%f", &vendas);
		
		printf("insira o percentual sobre o total de vendas:\n");
		scanf("%f", &percentual);
		
		total = fixo+(vendas*percentual)+vendas;
		
		printf("a sua identificacao eh:%.1f e seu salario total eh:%.2f", id,total);
		
		return 0;
		
	}
