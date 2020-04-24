/*Escreva um programa que leia dois números reais: velocidade do veículo e velocidade máxima da via. Em seguida, calcule o percentual em que a velocidade do veículo ultrapassou a velocidade máxima da via e imprima o valor da multa que o motorista deverá pagar, com base na seguinte tabela: (a) Velocidade igual ou menor que o limite permitido: Não houve multa. (b) Velocidade até 20% acima do permitido: O valor da multa é R$ 85,13. (c) Velocidade entre 20% e 50% acima do permitido: O valor da multa é R$ 127,69. (d) Velocidade acima de 50% do permitido: O valor da multa é R$ 574,62 */
 
#include<stdio.h>
#include<stdlib.h>
 
int main(){
float vinte_pcto,cinq_pcto;
float carro,limite;
 printf("Informe a velocidade do carro ");
 scanf("%f",&carro);
   printf("Informe o limite de velocidade da via ");
 scanf("%f",&limite);
  vinte_pcto=(limite/5) + (limite);
 cinq_pcto=(limite/2) + (limite); 
    if (carro<=limite){
      printf("nao houve multas \n");
 }else if(limite<carro && carro<=vinte_pcto){
      printf(" O valor da multa e RS 85,13.\n");
  }else if(vinte_pcto<carro && carro<=cinq_pcto){
      printf(" O valor da multa e RS 127,69.\n");
}else if(cinq_pcto<carro){
      printf(" O valor da multa e RS 574,62.\n");
}
return(0);
}
