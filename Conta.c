#include <stdio.h>

int main(void) {
  float n1, n2, n3, n4, soma1, soma2;

  printf("Insira quatro numeros:\n");
  
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);
  scanf("%f", &n4);

  soma1 = n3 + n4;
  soma2 = n1 + n2;

  if(n1 > n2 && n3>n4 && soma1 < soma2){
    printf("Certo!");
    }else{
      printf("Errado");
    }
  

  
  
  return 0;
}