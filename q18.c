#include <stdio.h>
#include <math.h>

int main(void) {
  float raio, diametro, circunferencia, area, pi = 3.14159;
  puts("Qual o raio do circulo?\n");
  scanf("%f", &raio);

  printf("Diametro do circulo: %.2f", 2* raio);
  printf("Circunferencia do circulo: %.2f", 2*pi*raio);
  printf("Area do circulo: %.2f", pi*pow(raio,2));

  return 0;
}