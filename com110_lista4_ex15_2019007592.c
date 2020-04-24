/*Escreva um programa que leia um número inteiro N >= 2 e imprima um triângulo retângulo. Por exemplo, se N = 3: (Dica: use laços aninhados.)*/

#include<stdio.h>
#include<stdlib.h>
 
int main (){
int altura, i, j=1, aux;
printf("Triângulo Retângulo. \n\n");
printf ("Digite a altura do Triângulo: ");
scanf ("%d", &altura);
printf ("\n");
for (i=1; i<=altura; i++)
{
aux=j;
while(aux>=1) {
printf ("#");
aux--;
}
j+=1;
printf ("\n");
}
return 0;
}
