/*3. Escreva um algoritmo que ofereça ao usuário um menu com três opções de escolha 1, 2 ou 3 até que uma delas seja escolhida. */
#include <stdio.h>

int main() {
  int menu, 	// Indica o número do menu escolhido
    	x,  	// valor 1
    	y,  	// valor 2
    	soma,
    	sub;

  // Menu
  printf("\n MENU\n Escolha uma acao.\n 1: Soma dois valores\n 2: Subtrai dois valores\n 3: Saia do Programa\n");
  scanf("%d", &menu);

   do {

    	if (menu == 1){
        	printf("\nEscreva o primeiro para soma: ");
        	scanf("%d",x);
        	printf("\nEscreva o segundo para soma: ");
        	scanf("%d",y);

        	soma = x+y;
        	printf("\n A soma é:%d", soma);
        	}

    	if (menu == 2){
        	printf("\nEscreva os numeros para subtracao");
        	scanf("%d", x);
        	scanf("%d", y);

        	sub = x-y;
        	printf("\n A subtracao e:%d", sub);
      	}

  }
  while (menu != 3);
	return 0;
}
