#include <stdio.h>

int main(void) {
  int n1, n2, n3;
  
  printf("Insira o ano: \n");
  scanf("%i", &n1);

  n2 = n1 % 4;
  n3 = n1 % 100;
  
  if(n2 == 0 && n3!= 0){
    printf("O ano é bissexto!");
    }else{
      printf("Não bissexto!");
    }
  
  
  
  
  
  return 0;
}