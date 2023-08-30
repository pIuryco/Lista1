#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a;

  puts("Insira um valor\n");
  scanf("%d", &a);

  printf("Valor absoluto de %d: %d", a, abs(a));
  
  return 0;
}