// Escreva um programa que receba um numero inteiro e então determine e imprima se ele é par ou impar sem utilizar if's

#include <stdio.h>

int main(void) {
  int num;
  
  printf("Digite o numero a ser lido: ");
  scanf("%d", &num);

  num % 2 == 0 ? printf("O numero é par") : printf("O numero é impar");
  
  return 0;
}