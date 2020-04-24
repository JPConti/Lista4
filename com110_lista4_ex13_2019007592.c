/*Escreva um programa que leia dois números inteiros e imprima todos os números inteiros entre os dois números lidos. Use a estrutura de repetição PARA.*/
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 int numero1 = 0, numero2 = 0, i;
 printf("Imprimir números inteiros. \n\n");
  printf("\n Digite o primeiro número (menor): ");
 scanf("%d", &numero1);
 
 printf("\n Digite o segundo número (maior): ");
 scanf("%d", &numero2);
 
 if (numero1 >= numero2) {
 printf("\n\n Intervalo incorreto. Informe o menor número primeiro.\n");
 }
 for (i = numero1; i <= numero2; i++)
 printf("\n%d", i);
 printf("\n\n");
 return(0);
}
