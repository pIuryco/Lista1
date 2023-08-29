#include <stdio.h>

int main(void) {
  float a;
  printf("Escreva um numero decimal\n");
  scanf("%f", &a);
  
  printf("%.1f", a);
  return 0;
}