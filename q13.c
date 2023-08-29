#include <stdio.h>

int main(void) {
  int a, b;
  
  puts("Escolha dois valores para a e b");
  scanf("%d %d", &a, &b);

  printf("Valor de a antes da troca: %d\n", a);
  printf("Valor de b antes da troca: %d\n\n\n", b);
  
a = a^b;
b = a^b;
a = a^b;
 
  printf("Valor de a depois da troca: %d\n", a);
  printf("Valor de b depois da troca: %d\n", b);
  

}