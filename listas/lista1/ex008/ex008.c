// Escreva um programa que receba um valor inteiro e apresente o resultado do
// valor lido elevado ao quadrado.

#include <stdio.h>

int main(void) {

  int X;
  printf("Digite o valor para ser calculado: ");
  scanf("%d", &X);
  printf("O valor ao quadrado é: %d", X*X);
  return 0;
}