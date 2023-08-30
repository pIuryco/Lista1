#include <stdio.h>

int main(void) {
 int a, b;
  puts("Insira um numero");
  scanf("%d", &a);
  puts("Insira outro numero");
  scanf("%d", &b);

 a % b == 0? printf("%d e multiplo de %d", a,b): printf("%d nao e multiplo de %d", a,b);
  return 0;
}