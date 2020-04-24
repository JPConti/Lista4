/*Faça um programa que receba dois números inteiros N1 e N2, calcule e imprima a tabuada (de 0 até 10) de todos os números entre N1 e N2.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
int tab,n1,n2,p,result;
printf("Digite o menor valor \n");
scanf("%d",&n1);
printf("Digite o maior valor \n");
scanf("%d",&n2);
for(tab=n1;tab<=n2;tab++){
for(p=0;p<=10;p++){
result= tab*p;
printf("%d X %d = %d \n",tab,p,result);
}
printf("\n");
}
 return 0;
}
