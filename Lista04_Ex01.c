#include <stdio.h>

int main(void) {
  int n1;
  
printf("Insira um número:\n");
scanf("%d", &n1);

  while(n1%2==0){
  printf("\n%d é par!\n", n1);
  printf("Insira outro número\n");
  scanf("%d", &n1);
}
  if(n1%2!=0){
  printf("%d é ímpar!\n", n1);
  printf("Finalizando!");
}

  
  
  return 0;
}