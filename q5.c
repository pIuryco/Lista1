#include <stdio.h>

int main(void) {
  int a;
  printf("Valor da conta:\n");
  scanf("%d", &a);

  printf("Valor a ser pago com a taxa de 10%: %.2f\n", a*1.1);
  
  return 0;
}