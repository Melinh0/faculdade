#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
  int NUM,maior=NUM;
  printf("\n DIGITE UM NUMERO INTEIRO: ");
  scanf("%d",&NUM);
  while(NUM!=0) {
    if(NUM>maior)
    maior=NUM;
    printf("\n DIGITE OUTRO NUMERO(PARA ENCERRAR DIGITE 0) : ");
    scanf("%d",&NUM);
  }
  printf("\n O MAIOR NUMERO É: %d",maior);
  return(0);
}