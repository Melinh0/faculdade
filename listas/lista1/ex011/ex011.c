// Elabore um programa que apresente o valor da conversão em dolar de um valor lido em real. O
// programa deve solicitar o valor da cotação do dolar e também a quantidade de reais que o usuario
// deseja converter.

#include <stdio.h>

int main(void){
    float qtdDolar;
    float qtdReal;
    float cotacao;

    printf("Digite o valor da cotação do dolar atualmente: ");
    scanf("%f", &cotacao);
    printf("Digite o valor que você quer converter: ");
    scanf("%f", &qtdReal);
    qtdDolar = qtdReal / cotacao;
    printf("A quantidade em dolar é: %0.2f\n", qtdDolar);
}