#include <stdio.h>

int main(void) {
  int repet, num;

  printf("escreva um numero positivo:  ");
  scanf("%i", &num);

  for(repet = 0; repet < num; repet++){
    printf("%i\n", num);
  }

  
  return 0;
}