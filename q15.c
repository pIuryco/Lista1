#include <stdio.h>

int main(void) {
  int dias;
  printf("Quantos dias voce trabalhou?\n");
  scanf("%d", &dias);

  
  float receber = (dias <= 10) ? 50.25 * dias : (dias <= 20) ? 50.25* dias * 1.2 : 50.25* dias * 1.3;
    
  
  printf("Valor a ser recebido : %.2f", receber * 0.9);
  
}