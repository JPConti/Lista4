/*1. Escreva um algoritmo que leia um inteiro positivo e imprima o resultado das potencias de r, de 0 até 10 (2^0, 2^1...2^10) */
#include <stdio.h>

int main() {
  int x,    	// base
  	potencia, // guarda as potencias
  	contador;

  printf("\nDigite um numero inteiro para ver até sua potencia de 10: ");
  scanf("%d", &x);

  /* Inicializacoes */
  potencia = 1;
  contador = 0;
  printf("\nO valor de %d elevado a %d: %d\n", x, contador, potencia);
  contador = 1;

  /* Calculo da potencia */
  while (contador <= 10) {

    	potencia = potencia * x;
    	printf("\nO valor de %d elevado a %d: %d\n", x, contador, potencia);
    	contador = contador + 1;
  }
  return 0;
}
