#include <stdio.h>

int main(void) {
  int a;
   printf("Escolha um valor inteiro\n");
   scanf("%d", &a);
   
   printf("Sucessor: %d\n", a+1);
   printf("Antecessor: %d", a-1);
  return 0;
}