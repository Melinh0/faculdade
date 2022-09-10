// Escreva um programa que leia duas variáveis A e B e efetue a troca dos valores. O objetivo é que a
// variável A passe a conter o valor de B e a variável B passe a possuir o valor de A. Apresente os valores
// após a efetivação do processamento da troca.

#include <stdio.h>

int main(void){
    float A;
    float B;
    float aux;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("O valor de A: %0.1f e B: %0.1f\n", A, B);

    aux = A;
    A = B;
    B = aux;
    printf("Apos inverter temos A: %0.1f e B: %0.1f\n", A, B);
}