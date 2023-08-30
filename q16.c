#include <stdio.h>

int main(void) {
  float vhoraaula, horatrab, descontoinss;

puts("Qual o valor da hora aula?");
scanf("%f", &vhoraaula);
  
puts("Quantas horas voce trabalhou?");
scanf("%f", &horatrab);  

puts("Qual o valor do desconto de INSS, em porecentagem?");
scanf("%f", &descontoinss);  


  printf("Salário bruto %.2f:", vhoraaula*horatrab);
  printf("Salário liquido %.2f:", (vhoraaula*horatrab) - (vhoraaula*horatrab*(descontoinss/100)));
  
  return 0;
}