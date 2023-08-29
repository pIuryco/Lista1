#include <stdio.h>

int main(void) {
  float altura, pesoideal;
  int genero;
  
  printf("Qual sua altura em metros?\n");
  scanf("%f", &altura);

  printf("Qual seu genero?\n");
  printf("Insira (1) para masculino e (2) para feminino\n");
  scanf("%d", &genero);

  switch(genero) {
    case 1: 
    pesoideal = (72.7 * altura) - 58;
    break;
    case 2:
    pesoideal = (62.1 * altura) - 44.7;
    break;
  }
  printf("Seu peso ideal: %.2f Kg", pesoideal);
}