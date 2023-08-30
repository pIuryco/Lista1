#include <stdio.h>

int main(void) {
  int x, n;
  
  printf("Escolha um valr para x\n");
  scanf("%d", &x);
  printf("Escolha um valr para n\n");
  scanf("%d", &n);

  printf("x * 2^n = %d", x<<n);
  return 0;
}