#include <stdio.h>
#include <math.h>

int main(void) {
  int x1, y1, x2, y2;

  puts("Insira o primeiro par ordenado (x,y)");
  scanf("%d %d", &x1, &y1);
  puts("Insira o segundo par ordenado (x,y)");
  scanf("%d %d", &x2, &y2);
  
  printf("distancias entre os pontos: %.2f", sqrt(pow((x2-x1),2) + pow((y2-y1),2)));
  return 0;
}