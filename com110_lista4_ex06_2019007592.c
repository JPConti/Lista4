/*6. Escreva um programa que leia dois números reais e imprima o resultado das quatro operações básicas (adição, subtração, multiplicação e divisão sobre esses números */
#include <stdio.h>

int main() {
  float num, ndo, som, sub, mul, div;

  printf("\nDigite um numero real ");
  scanf("%f", &num);
  printf("\nDigite outro numero real ");
  scanf("%f", &ndo);

  printf("Numero um: %f \nNumero dois: %f",num, ndo);

  /* Inicializacoes */
  som = 0;
  sub = 0;
  mul = 0;
  div = 0;

  /* Calculo de operacoes */

    	som = num+ndo;
    	sub = num-ndo;
    	mul = num*ndo;
    	div = num/ndo;

    	printf("\n\nSoma      	: %f\n\nSubtracao 	: %f\n\nMultiplicacao : %f\n\nDivisao   	: %f\n ", som, sub, mul, div);


  return 0;
}
