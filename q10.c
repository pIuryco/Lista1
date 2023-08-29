#include <stdio.h>

int main(void) {
 float volume, largura, comprimento, altura;
  
  printf("Insira a largura do retangulo\n");
    scanf("%f", &largura);
  printf("Insira o comprimento do retangulo\n");
    scanf("%f", &comprimento);
  printf("Insira a altura do retangulo\n");
    scanf("%f", &altura);
  volume = largura * altura * comprimento;

  printf("Volume do retangulo: %.2f", volume);
  return 0;
}
