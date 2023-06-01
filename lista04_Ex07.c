#include <stdio.h>

int main(void) {
  int num, cont=0, soma=0, res, contcor=0, conter=0;

  printf("Insira um número entre 2 e 9 para tabuada:\n");
  scanf("%d", &num);

  while(num<2 || num>9){
    printf("Insira um número válido:\n");
    scanf("%d", &num);
  }

 do{
   for(cont=1; cont<=10; cont++){
    soma = num + soma;
    printf("%d x %d = ", num, cont);
    scanf("%d", &res);
    if(res==soma){
      printf("Correto!\n");
      contcor++;
    }else{
      printf("Incorreto!\n");
      conter++;
    }
   }

   printf("Acertos: %d\nErros: %d", contcor, conter);
 }while(cont<=10);
  
  
  return 0;
}