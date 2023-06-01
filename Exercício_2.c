#include<stdio.h>
	int main(){
		float altura, raio, volume, pi;
		volume = pi*raio*raio*altura;
		pi = 3.141592;
	
	printf("insira a altura do cilindro:\n");
	scanf("%f", &altura);
	
	
	printf("insira o raio do cilindro:\n");
	scanf("%f", &raio);
	
	volume = pi*raio*raio*altura;
		pi = 3.141592;
	
	printf("o volume do cilindro eh: %.1f", volume  );
	return 0;
	
		
		
		
	
	}
