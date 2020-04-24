/*Escreva um programa usando três estruturas de repetição ENQUANTO que imprima: (a) Os números de 1 até 20. (b) Os números de 20 até 1. (c) Somente os números ímpares de 1 a 20.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int n=1;
 printf("numeros de 1 a 10 \n");
while(n<=10){
 printf(" %i\n", n);
 n = n + 1;
}
n=20;
 printf("numeros de 20 a 1 \n");
while(n>=1){
 printf(" %i\n", n);
 n = n - 1;
}
n=1;
 printf("numeros impares de 1 a 20 \n");
while(n<=20){
 printf(" %i\n", n);
 n = n + 2;
}
 return 0;
}
