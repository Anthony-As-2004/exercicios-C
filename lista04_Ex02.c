#include <stdio.h>

int main(void) {
  int n1,n2, cont=0;
  
  printf("Insira um número:\n");
  scanf("%d", &n1);

  printf("Insira outro número:\n");
  scanf("%d", &n2);

  while(n1>n2){
    
    printf("Insira um novo valor:\n");
    scanf("%d", &n2);
    
  }

  if(n2>n1){
    printf("%d é maior que %d!\n", n2, n1);
  }
  
  return 0;
}