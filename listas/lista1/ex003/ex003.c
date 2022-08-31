#include <stdio.h>

int main(void) {
  float f;

  printf("Digite um valor: ");
  scanf("%f", &f);
  printf("Valor recebido: %.1f\n", f);
  
  return 0;
}