/*5. Quantos segundos existem em minutos? Escreva um programa que receban uma quan tidade de minutos e imprima quantos segundos existem */

#include <stdio.h>

int main() {
  int totseg, min;

  printf("\nDigite um numero de minutos ");
  scanf("%d", &min);

  /* Inicializacoes */
  totseg = 0;

  /* Calculo de minutos */

    	totseg = min*60;
    	printf("\nO valor de %d minutos em segundos e: %d segundos", min, totseg);
      
  return 0;
}
