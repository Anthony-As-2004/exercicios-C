#include<stdio.h>
	int main(){
		float pagamento, dia;
		
		printf("insira a quantidade de dias trabalhados:\n");
		scanf("%f", &dia);
		
		pagamento = dia * 92;
		
		printf("o pagamento eh: %.2f", pagamento);
	}
