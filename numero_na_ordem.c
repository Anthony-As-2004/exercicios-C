#include <stdio.h>

int main(void) {
  int n1, n2 , n3;
  printf("Insira o primeiro numero:\n");
  scanf("%i", &n1);

  printf("Insira o segundo numero:\n");
  scanf("%i", &n2);

  printf("Insira o terceiro numero:\n");
  scanf("%i", &n3);
 
  
if(n1 <= n2 && n3 >= n2){
  printf("a ordem crescente eh: %i, %i, %i\n", n1, n2 , n3);
  
  }else if(n1<=n3 && n3 <= n2){
    printf("a ordem crescente eh: %i, %i, %i", n1, n3, n2 );
    
    }else if(n2<=n1 && n1<=n3){
      printf("a ordem crescente eh: %i, %i, %i", n2, n1, n3);
      
      }else if(n2<=n3 && n3<=n1){
        printf("a ordem crescente eh: %i, %i, %i", n2, n3, n1);
        
        }else if(n3<=n2 && n2<=n1){
          printf("a ordem crescente eh: %i, %i, %i", n3, n2, n1);
          }else{
            printf("a ordem crescente eh: %i, %i, %i", n3, n1, n2);
          }
  
    
   
  

   
    
    

  

  

  

  
  
  return 0;
  
  
}