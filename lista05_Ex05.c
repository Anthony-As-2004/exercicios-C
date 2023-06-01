#include <stdio.h>

int main(void) {
  
  int num, cont=0, soma=0;
  do{
  printf("Insira um valor para soma:\n");
  scanf("%d",&num);
  if(num==0)
    continue;
  cont++;
  soma = num + soma;
  if(num==100 || num==-100)
    
  break;
 
    
  }while(cont<10);
    
  printf("A soma dos dez números eh %d", soma);
  
  return 0;
}