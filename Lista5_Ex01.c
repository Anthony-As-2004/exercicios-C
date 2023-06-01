#include <stdio.h>

int main(void) {
  int opcao;
  float soma=0;

  printf("Menu:\n");
  printf("Opcao 1 : Sanduiche natural : R$ 5.00\n");
  printf("Opcao 2 : X-salada - R$ 15.00\n");
  printf("Opcao 3 : Refrigerante - R$ 3.50\n");
  printf("Opcao 4 : Suco - R$ 3.00\n");
  printf("Opcao 5 : Sorvete - R$ 9.00\n");
  printf("Opcao 6 : Finalizar\n");

  printf("\nInsira sua opcao:\n");
  scanf("%d", &opcao);

  while (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4  || opcao == 5 ){
  
    switch(opcao){
      case 1:
        printf("Sanduiche Natural\n");
        soma = soma + 5;
      break;

      case 2:
        printf("X-Salada\n");
        soma = soma + 15;
      break;

      case 3:
        printf("Refrigerante\n");
        soma = soma + 3.5;
      break;

      case 4:
        printf("Suco\n");
        soma = soma + 3;
      break;

      case 5:
        printf("Sorvete\n");
        soma = soma + 9;
      break;


      default:
        printf("Inválido\n");

  }
    
    printf("Insira outra opcao ou Finalize:\n");
    scanf("%d", &opcao);
    
  }

  if(opcao == 6){
    printf("Finalizado!!\nO total da conta ficou:\n%.2f reais", soma);
    
  }
  
  return 0;
}