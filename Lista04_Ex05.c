#include <stdio.h>

int main(void) {
  int num, cont;

  printf("Insira um valor:\n");
  scanf("%d", &num);

  while(num<=500){
    for(cont=0; cont<num; cont++){
      printf("%d-", num);
    }
    printf("\nInsira outro valor:\n");
    scanf("%d", &num);
  } 
  if(num>500){
    printf("Finalizado!");
  }
  return 0;
}