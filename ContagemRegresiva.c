#include <stdio.h>

int main(void) {
  int repet, num;

  printf("insira um numero positivo:  ");
  scanf("%i", &num);

  for(repet = num; repet>0; repet--)
    printf("%i\n", num--);
  
  return 0;
}