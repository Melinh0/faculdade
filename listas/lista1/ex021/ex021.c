// Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é multiplo do segundo sem usar if's

#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  
  printf("Digite o valor do primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o valor do segundo numero: ");
  scanf("%d", &num2);

  num1 % num2 == 0 ? printf("O numero %d é divisivel pelo numero %d", num1, num2) : printf("O numero %d não é divisivel pelo numero %d", num1, num2); 
  return 0;
}