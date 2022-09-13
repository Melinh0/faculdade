//Fazer um programa para ler as coordenadas de x e y de dois pontos e calcular a distancia entre os dois pontos no plano. sqrt()

#include <stdio.h>
#include <math.h>

int main(void) {
  int x1, x2, y1, y2, x , y;
  float d;

  printf("Digite o valor de x1: ");
  scanf("%d", &x1);
  printf("Digite o valor de x2: ");
  scanf("%d", &x2);

  printf("Digite o valor de y1: ");
  scanf("%d", &y1);
  printf("Digite o valor de y2: ");
  scanf("%d", &y2);

  x = (x2 - x1) * (x2 - x1);
  y = (y2 - y2) * (y2 - y1);
  
  d = sqrt(x + y);
  printf("A distancia entre os dois pontos é de: %0.2f\n", d);
  return 0;
}