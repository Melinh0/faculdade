//Sabendo que os argumentos da função ”printf”podem ser expressões (a+b, a/b, a*b...), e não somente
//argumentos, faça um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e seu meio.

#include <stdio.h>

int main(void) {
  int X;

  printf("Digite um valor para X: ");
  scanf("%d", &X);
  printf("O valor de X é: %d\n", X);
  printf("O valor do seu triplo é: %d\n", 3*X);
  printf("O valor do Seu quadrado é: %d\n", X*X);
  printf("O valor do seu meio é: %d\n", X / 2);
  
  return 0;
}