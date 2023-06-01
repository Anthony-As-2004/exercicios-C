#include <stdio.h>

int main(void) {
  int num, cont=0, c1;


printf("1 - Ordem crescente\n2 - Ordem decrescente\n3 - Só valores pares\n4 - Só valores ímpares\n5 - Finalizar\n");
printf("Insira um numero maior que zero para escolher entre as opções:\n");
scanf("%d", &num);


  while(num == 1 || num == 2 || num == 3 || num == 4){
    
    switch(num){
      case 1:
          printf("Insira um valor para a ordem crescente:\n");
          scanf("%d", &c1);
          for(cont = 0; cont<=c1; cont++){
            printf("%d-", cont);
          }
      break;

      case 2:
        printf("Insira um valor para a ordem decrescente:\n");
        scanf("%d", &c1);
        for(cont=c1; cont>=0; cont--){
          printf("%d-", cont);
        }
      break;
      
      case 3:
        printf("Insira um valor para ordem crescente, mostrando apenas os pares:\n");
        scanf("%d", &c1);
        for(cont=0; cont<=c1; cont++){
          if(cont % 2 !=0)
            continue;
          printf("%d-", cont);
        }
      break;

      case 4:
        printf("Insira um valor para ordem crescente, mostrando apenas os impares:\n");
        scanf("%d", &c1);
        for(cont=0; cont<=c1; cont++){
          if(cont%2==0)
            continue;
          printf("%d-", cont);
        }
    
  }
   printf("\nInsira outro numero ou finalize:\n");
   scanf("%d", &num);
   

}  
  if(num == 5){
    printf("Finalizado!!");
  }
  
  return 0;
}