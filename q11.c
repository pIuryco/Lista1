#include <stdio.h>

int main(void) {
  float dolar, reais;
  printf("Qual a cotação atual do dolar?\n");
  scanf("%f", &dolar);

  printf("Quantos reais voce deseja converter para dolar?\n");
  scanf("%f", &reais);

 printf("Conversão dos reais em dolar: %.2f", reais/dolar);
  return 0;
}