/*Escreva um programa que leia vários números inteiros até que se digite um número negativo. Em seguida, imprima o maior e o menor dentre os números lidos. Use a estrutura de repetição FAÇA...ENQUANTO.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
 int n1,maior=0,menor=0,p=0,q=0;
  do{
 printf("Informe um numero\n");
 scanf("%d",&n1); 
   q=maior;
 if(maior>=0){
 maior=n1;
  if(q!=0 && q>=maior){
   maior=q;
   }
 }
 p=menor;
 if(menor>=0){
 menor=n1;
  if(p!=0 && p<=menor){
   menor=p;
   }
 }
 }while (n1>=0); 
printf("o menor valor digitado foi= %d\n",menor);
printf("o maior valor digitado foi= %d\n",maior);
 
 return 0;
}
