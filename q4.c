#include <stdio.h>
#include <math.h>

int main(void) {
  int a;
  printf(" Escolha um valor inteiro: \n");
  scanf("%d", &a);

  printf("O triplo: %d\n", a*3);
  printf("O quadrado: %.0f\n", pow(a,2));
  printf("A metade: %.2f\n", a *0.5);
  return 0;
}