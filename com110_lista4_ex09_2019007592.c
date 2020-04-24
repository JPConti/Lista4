/*Faça um programa que imprima na tela a mensagem de saudação a seguir, usando para isso uma estrutura de repetição. */
#include <stdio.h>
#include <stdlib.h>
 
int main() {
 int i;
 printf("################## \n");
for(int i = 0; i < 5; i++){
   if(i == 2){
       printf("# SEJA BEM VINDO #\n");
   }else {
       printf("#                #\n");
   }
}
printf("##################");
 return 0;
}
