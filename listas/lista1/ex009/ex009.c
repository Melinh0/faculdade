// Escreva um programa que leia um valor num ́erico inteiro e apresente como resultado os seus valores sucessor e antecessor.

#include <stdio.h>

int main(void){
    int X;

    printf("Digite um valor para ser calculado: ");
    scanf("%d", &X);
    printf("O valor do antecessor do numero %d é %d\n", X, X-1);
    printf("O valor do sucessor do numero %d é %d\n", X, X+1);
}