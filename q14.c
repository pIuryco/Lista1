#include <stdio.h>

int main(void) {
  int c;
  float f;
  printf("Insira a temperatura em gruas Celsius\n");
  scanf("%d", &c);

  f = (9 * (float)c + 160)/5;

  printf("temperatura em fahrenheit: %.1f", f);
  return 0;
}