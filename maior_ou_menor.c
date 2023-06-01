#include <stdio.h>

int main(void) {
  float n1, n2;
  printf("Insira o primeiro numero:\n");
  scanf("%f", &n1);

  printf("Insira o segundo numero:\n");
  scanf("%f", &n2);

  if(n1>n2){
    printf("%.1f eh maior\n", n1);
    
    }else{
      printf("%.1f eh menor", n1);
    }
  return 0;
}