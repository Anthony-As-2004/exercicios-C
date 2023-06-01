#include<stdio.h>
	int main(){
		float metros, cm;
		
		printf("insira o valor em cm:\n");
		scanf("%f", &cm);
		
		metros = cm/100;
		
		printf("o valor em metros eh: %.1f m", metros);
		
	}
