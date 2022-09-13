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
}#include <stdio.h>

int main(void) {
  printf("-------- PROGRAMA INICIADO --------\n");

  int lula = 0;
  int bolsonaro = 0;
  int ciro = 0;
  int simone = 0;
  int davila = 0;
  int soraya = 0;
  int brancos = 0;
  int num;
  
  printf("Digite o numero do candidato: ");
  scanf("%d", &num);

  while(num >= 0){
    if (num == 0){
      brancos++;
    } else if (num == 13){
      lula++;
    } else if (num == 22){
      bolsonaro++;
    } else if (num == 12){
      ciro++;
    } else if (num == 15){
      simone++;
    } else if (num == 44){
      soraya++;
    } else if (num == 30){
      davila++;
    }
    
  }
  printf("O resultado foi: ciro - %d\n , lula - %d\n , bolsonaro - %d\n , Simone Tebet - %d\n , Davila - %d\n , Soraya - %d\n", ciro, );
  return 0;
}