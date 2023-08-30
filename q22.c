#include <stdio.h>
#include <string.h>
int main(void) {
  char carac[20] = "A BCabc012 $*+/";
  for(int i = 1; i <= strlen(carac); i++){
    printf("Valor de %c : %d\n", carac[i], carac[i]);
  }
  return 0;
}