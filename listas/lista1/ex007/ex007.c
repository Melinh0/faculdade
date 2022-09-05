// Faça um programa que leia uma quantidade de horas, minutos e segundos e
// imprima o total de segundos.

#include <stdio.h>

int main(void) {
  int horas;
  int minutos;
  int segundos;
  int total;

  printf("Digite o valor em horas: ");
  scanf("%d", &horas);
  printf("Digite o valor em minutos: ");
  scanf("%d", &minutos);
  printf("Digite o valor em segundos: ");
  scanf("%d", &segundos);

  total = (horas * 3600) + (minutos * 60) + segundos;
  printf("O valor total em segundos é: %d segundos", total);
  return 0;
}