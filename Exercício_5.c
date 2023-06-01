#include<stdio.h>
	int main(){
		float  n1,n2,n3,n4,n5, media;
		
		printf("insira o primeiro valor:\n");
		scanf("%f", &n1);
		
		printf("insira o segundo valor:\n");
		scanf("%f", &n2);
		
		printf("insira o terceiro valor:\n");
		scanf("%f", &n3);
		
		printf("insira o quarto valor:\n");
		scanf("%f", &n4);
		
		printf("insira o quinto valor:\n");
		scanf("%f", &n5);
		
		media = (n1 + n2 + n3 + n4 + n5)/5;
		
		printf("a media eh:%.2f", media);
		
		return 0;
	}
