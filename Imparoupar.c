#include <stdio.h>

int main(void) {
  int n1, n2;

  printf("Insira um número:\n");
  scanf("%i", &n1);

  n2 = n1 % 2;

  if(n2 == 0){
    printf("Par!!\n");
    }else{
      printf("Impar!!");
  }
  
  
    

  
  return 0;
}