#include <stdio.h>

int main(void) {
  int n1, n2, n3, cont=0;

  printf("Insira três valores:\n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);

  while(n2<=n1){
    printf("O segundo número deve ser maior que o primeiro\n");
    printf("Insira um número:\n");
    scanf("%d", &n2);
  }

  while(n3==0){
    printf("O terceiro númeor deve ser maior que zero\n Insira um número:\n");
    scanf("%d", &n3);
  }

  n1 = n1 +n3;
  
  while(n1<=n2){
    
    n1 = n1+n3;
    cont++;
    
    
  }

  if(n1>=n2){
    
    printf("O novo valor de n1 é: %d\n", n1);
    
    printf("Para que n1 fosse maior que n2 o cálculo foi feito %d vezes", cont);
  }
  

  return 0;
}