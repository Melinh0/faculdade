#include <stdio.h>

int main() {
	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);

	int fatorial = 1;
	while(numero > 1) {
		fatorial *= numero;
		numero--;
	}

	printf("Fatorial: %d\n", fatorial);
  }