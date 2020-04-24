/*2. Escreva um algoritmo que leia um inteiro positivo ne imprima o resultado das potencias de 3 de 0 até (3^0, 3^1, 3^2...3^n)
*/
#include <stdio.h>

int main() {
  int x,    	// base
  	potf,  	// potencial final
  	potencia, // guarda as potencias
  	contador;

  printf("\nDigite um numero inteiro para ver todas as potencias de 3 ate o valor digitado ");
  scanf("%d", &potf);

  /* Inicializacoes */
  x = 3;
  potencia = 1;
  contador = 0;
  printf("\nO valor de %d elevado a %d: %d\n", x, contador, potencia);
  contador = 1;

  /* Calculo da potencia */
  while (contador <= potf) {

    	potencia = potencia * x;
    	printf("\nO valor de %d elevado a %d: %d\n", x, contador, potencia);
    	contador = contador + 1;
  }
  return 0;
}
