#include <stdio.h>

int main(void) {
  int cont, num;

  printf("insira um numero positivo:  ");
  scanf("%i", &num);

  for(cont = (num*2) + 1; cont > 0; cont--)
  printf("%i\n", num--);
  return 0;
}