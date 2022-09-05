// Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e
// calcular o seu peso ideal atraves da seguinte formula:

#include <stdio.h>

int main(void) {
  char sexo;
  float altura;
  float peso;
  float pesoIdeal;

  printf("Digite seu sexo (M/H): ");
  scanf("%c", &sexo);

  if (sexo == 'm' || sexo == 'M') {
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    pesoIdeal = (62.1 * altura) - 44.7;
    printf("O peso ideal é: %0.2f\n", pesoIdeal);
  } else if (sexo == 'h' || sexo == 'H') {
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    pesoIdeal = (72.7 * altura) - 58;
    printf("O peso ideal é: %0.2f\n", pesoIdeal);
  }
  return 0;
}