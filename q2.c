#include <stdio.h>

int main(void) {
  int x;

  printf("Escolha um valor para x\n");
  scanf("%d", &x);
  
  printf("Número escolhido em hexadecimal: %X\n", x);
  printf("Número escolhido em octal: %o", x);
}