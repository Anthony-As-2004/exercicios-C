#include <stdio.h>

int main(void) {
  float n1, n2, soma;
 
  printf("insira o primeiro valor:\n");
  scanf("%f", &n1);

  printf("insira o segundo valor:\n");
  scanf("%f", &n2);

  printf("Insira o resultado:\n");
  scanf("%f", &soma);

  if(n1 == soma - n2){
    printf("Resultado Correto!\n");
    
    }else{
      printf("Resultado Incorreto!");  
  }


  
  


  
  return 0;
}