#include <stdio.h>

int main(void) {
  float raio;
  float pi = 3.14149;
  
  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  printf("O valor do seu raio é de %0.2f\n", raio);
  printf("O valor do seu diametro é de %0.2f\n", raio * 2);
  printf("O valor da sua circunferencia é de %0.2f\n", 2*pi*raio);
  printf("O valor da sua area é de: %0.2f\n", pi * raio * raio);
  return 0;
}