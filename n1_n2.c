#include <stdio.h>

int main(void) {
  int n1, n2, cont, n3;

  n3 = 0;

  printf("insira primeiro valores:  ");
  scanf("%i", &n1);

  printf("insira segundo valor:  ");
  scanf("%i", &n2);

  
  for(cont = (n2)+1; cont>0; cont--){
    if(n1 == 1){
    printf("%i\n", n2--);
    
    } else if(n1 == 0){
      printf("%i\n", n3++);
    }
  }
  
  
   
  
  return 0;
}