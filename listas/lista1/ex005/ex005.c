//Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser pago, considerando que o restaurante cobra 10% de taxa para o garçom.


#include <stdio.h>

int main(void) {
  float conta;

  printf("Digite o valor da conta a ser paga: ");
  scanf("%f", &conta);
  float valorTotal = conta * 1.10;
  printf("O valor total da conta é: %0.2f\n", valorTotal);
  
  return 0;
}