#include <stdio.h>

int main(void) {

  int a,b;
  
  puts("Escolha dois números");
  scanf("%d %d", &a, &b);

 printf("A soma: %d\n", a + b);
 printf("O produto: %d\n", a * b);
 printf("A diferença: %d\n", a - b); 
 printf("O quociente: %f\n", (float)a / b);
 printf("O resto: %d\n", a % b); 
}