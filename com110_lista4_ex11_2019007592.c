/*Escreva um programa que calcule e imprima a idade de uma pessoa, com base nos seguintes dados de entrada: (a) Dia, mês e ano de nascimento de uma pessoa. (b) Dia, mês e ano atual.*/
#include<stdio.h>
#include<stdlib.h>
 
int main(){ 
 int diaNascimento, mesNascimento, anoNascimento, diaAtual, mesAtual, anoAtual, idade1,idade2;
 float idade3;
if(1==1) {
printf("\n\n\n Calcular a idade. \n");
printf("\n Digite os dados da pessoa. \n");
printf("\n Digite o dia do nascimento: ");
scanf("%d", &diaNascimento);
printf(" \n Digite o mês do nascimento: ");
scanf("%d", &mesNascimento);
printf(" \n Digite o ano do nascimento: ");
scanf("%d", &anoNascimento);
printf("\n \n  Digite a data de hoje. \n");
printf("\n Digite o dia atual: ");
scanf("%d", &diaAtual);
printf(" \n Digite o mês atual: ");
scanf("%d", &mesAtual);
printf(" \n Digite o ano atual: ");
scanf("%d", &anoAtual);
 
anoNascimento=(anoNascimento*365);
 
mesNascimento=((mesNascimento*30));
 
diaNascimento=((30-diaNascimento)*-1);
 
anoAtual=(anoAtual*365);
 
mesAtual=((mesAtual*30));
 
diaAtual=((30-diaAtual)*-1);
 
idade1=(anoAtual+mesAtual+diaAtual);
 
idade2=(anoNascimento+mesNascimento+diaNascimento);
 
idade3=((idade1-idade2)/365);
 
printf ("\n Essa pessoa tem %.0f ano(s) de idade." , idade3);
}
return (0);
}
