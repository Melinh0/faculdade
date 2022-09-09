// Escreva um programa que peça ao usuario para digitar dois numeros, obtenha-os do usuario e imprima
// a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.

#include <stdio.h>

int main(void){
    int X;
    int Y;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &X);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &Y);

    printf("Soma: %d\n", X + Y);
    printf("Produto: %d\n", X * Y);
    printf("Diferença: %d\n", X - Y);
    printf("Quociente: %d\n", X / Y);
    printf("Resto: %d\n", X % Y);
}
