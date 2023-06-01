#include <stdio.h>

int main(void) {
  int n1=0, cont=0, soma=0;
	
	while(soma<250){
	  n1++;
    soma = n1 + soma;
		cont++;
	}
	
	printf("Existem %d números na sequência", cont);
  return 0;
}