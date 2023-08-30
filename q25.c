#include <stdio.h>

int main(void) {
  int tempo, seg, min, h;
  
puts("Quantos segundos deseja transformar em  horas?");
  scanf("%d", &tempo);
  
  h = tempo /3600;
  min = (tempo % 3600)/60;
  seg = (tempo % 60);

printf("%d em horas: %dh %dm %ds", tempo, h, min, seg);
  
  return 0;
}