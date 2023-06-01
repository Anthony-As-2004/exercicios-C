#include <stdio.h>

int main(void) {
  float p1, p2, t1, t2, m1, m2, mf;

  printf("Insira suas notas das provas:\n");
  scanf("%f", &p1);
  scanf("%f", &p2);

  printf("Insira a nota dos trabalhos:\n");
  scanf("%f", &t1);
  scanf("%f", &t2);

  m1 = (p1*0.6) + (t1*0.4);
  m2 = (p2*0.7) + (t2*0.3);
  mf = (m1+m2)/2;

  printf("Sua media final eh: %.2f\n", mf);

  if(mf>=6){
    printf("Aprovado!!\n");
    }else if(mf>=4){
      printf("Recuperacao final");
      }else{
        printf("Reprovado!!");
      }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  return 0;
}