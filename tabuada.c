#include <stdio.h>
#define TAM 9 
int main(void) {
  
  int cont, tab, num, mult = 2;

  printf("insira um numero de 2 a 9:\n");
  scanf("%i", &num);

  for(cont=0; cont < TAM; cont++){
    tab = num * mult++;
    
    
    printf("%i\n", tab);
  }
  return 0;
}