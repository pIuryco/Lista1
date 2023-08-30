#include <stdio.h>
#include <string.h>

int main(void) {
int num, cent, dez, uni;

  printf("Escolha um numero de 3 digitos\n");
  scanf("%d", &num);

  cent = num / 100;
  dez = (num % 100) /10;
  uni = num % 10;

  printf("Numero escolhido: %d\n", num);
  printf("Numero invertido: %d",(uni*100) + (dez*10) + cent);
  
  
  return 0;
}