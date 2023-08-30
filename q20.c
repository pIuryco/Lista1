#include <stdio.h>

int main(void) {
  
int a;

  puts("Insira um numero");
  scanf("%d", &a);

  a % 2 == 0? printf("%d é par", a):printf("%d é impar", a);
  return 0;
}