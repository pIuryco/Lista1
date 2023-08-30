#include <stdio.h>
#include <math.h>
int main(void) {
 float a,b,c;
  puts("Escolha um valor para a");
  scanf("%f", &a);
  puts("Escolha um valor para b");
  scanf("%f", &b);
  puts("Escolha um valor para c");
  scanf("%f", &c);

  printf("Media aritmetica: %.2f\n", (a+b+c)/3);
  printf("Media geometrica: %.2f", pow((a*b*c), (1.0/3.0)));
  return 0;
}