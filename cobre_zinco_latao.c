#include<stdio.h>
	int main(){
		float latao, cobre, zinco;
		
		printf("insira o valor de latao que sera produzido em kg:\n");
		scanf("%f", &latao);
		
		cobre = latao*0.7;
		zinco = latao*0.3;
		printf("serao usados de cobre:%.1f kg\n", cobre);
		printf("serao usados de zinco:%.1f kg", zinco);
		return 0;
	}
