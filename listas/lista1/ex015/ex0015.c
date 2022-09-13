

#include <stdio.h>

int main(void){
    int workDays;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &workDays);

    if (workDays <= 10){
        float valor = (workDays * 50.25) * 0.90;
        printf("O valor a ser recebido é de: %0.2f", valor);
    } else if (workDays > 10 && workDays <= 20){
        float valor = (workDays * 50.25) * 0.90 * 1.20;
        printf("O valor a ser recebido é de: %0.2f", valor);
    }else if (workDays > 20){
        float valor = (workDays * 50.25) * 0.90 * 1.30;
        printf("O valor a ser recebido é de: %0.2f", valor);
    }
}
