#include <stdio.h>

int main(void) {
  int hora, minuto, segundo, segundos;
  printf("Insira a hora, minuto e segundo, neste modelo : xx xx xx\n");
  scanf("%d %d %d", &hora, &minuto, &segundo);

  
  segundos = (hora*3600) + (minuto*60) + segundo;
  printf("Total de tempo em segundos: %ds", segundos);
  return 0;
  
}