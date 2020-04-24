/*7. O índice de massa corporal (IMC) é utilizado O cálculo do IMC é feito dividindo a massa pelo quadrado da altura para identificar o peso ideal de uma pessoa. Escreva um programa que, dada a massa e a altura de uma pessoa, imprima o valor do seu IMC. */
#include <stdio.h>

int main() {
  float peso, altura, imc;

  printf("\nDigite seu peso em kg depois altura em cm ");
  scanf("%f %f", &peso, &altura);


  printf("Peso: %f \nAltura: %f",peso, altura);

  /* Inicializacoes */
	imc = 0;

  /* Calculo de operacoes */

	imc = peso*10000/(altura*altura);

    	printf("\n\nSeu IMC e: %f",imc);


  return 0;
}
