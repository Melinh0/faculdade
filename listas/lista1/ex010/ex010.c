// Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
// fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.

#include <stdio.h>

int main(void){
    float comprimento;
    float largura;
    float altura;
    float volume;

    printf("Digite o valor do comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite o valor da largura: ");
    scanf("%f", &largura);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;
    printf("O volume total é %0.2f\n", volume);
}