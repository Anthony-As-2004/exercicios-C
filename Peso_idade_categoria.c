#include <stdio.h>

int main(void) {
  
  float idade, peso;

  printf("Insira o peso e a idade:\n");
  scanf("%f", &peso);
  scanf("%f", &idade);

  if(idade >= 13 && idade <= 14 && peso<=45){
    printf("Leve Infantil");
    }else if(idade < 15 && peso>45){
      printf("Pesado Infantil");
      }else if(idade >= 15 && idade <= 17 && peso <= 60){
        printf("Leve Juvenil");
        }else if(idade< 18 && peso>60){
          printf("Pesado Juvenil");
          }else if(idade>=18 && peso <= 85){
            printf("Leve Adulto");
            }else{
              printf("Pesado Adulto");
            }
      
    
  
  
  
  
  
  
  
  return 0;
}