#include <stdio.h>
int main(void) {
  int num, cont=0, soma=0;

  printf("Insira um número entre 2 e 9 para tabuada:\n");
  scanf("%d", &num);
  
  while(num<2|| num>9){
    printf("Insira um número válido:\n");
    scanf("%d", &num);
  }

  
  
  for(cont=0; cont<10; cont++){
    soma = soma + num;
    printf("%d-", soma);
  }
  
  
  return 0;
}