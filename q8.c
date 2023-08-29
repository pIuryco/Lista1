#include <stdio.h>
#include <math.h>
int main(void) {
  int a; 
  
  printf("Escolha um valor inteiro\n");
  scanf("%d", &a);

  printf("O quadrado desse inteiro: %.0f", pow(a,2));
  return 0;
}