// Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
// Fahrenheit. A fórmula de versão  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
// temperatura em Celsius.

#include <stdio.h>

int main(void){
    float F;
    float C;

    printf("Digite a temperatura em graus celcius: ");
    scanf("%f", &C);
    F = (9*C + 160) / 5;
    printf("O valor em fahrenheit é %0.1f\n", F);
}