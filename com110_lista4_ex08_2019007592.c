/* 8. Faça um programa que receba a hora o período do dia atual no formato 24 horas (0, 1, 2, 23) e imprima:
(a) "Manha" (5h às 11h)
(b) "Tarde" (12h às 17h)
(c) "Noite" (18h às 4h)
*/

#include <stdio.h>
#include <time.h>

int main ()
{
	struct tm *data_hora_atual;

	time_t horas;

	time(&horas);

	data_hora_atual = localtime(&horas);

	horas = data_hora_atual->tm_hour;

	printf("\nHora......: %d", horas);


	if(horas >= 5 && horas <= 11)
    	{
    	printf("\nManha");
    	}
    	else
    	{
        	if(horas >= 12 && horas <= 17)
        	{
            	printf("\nTarde");
        	}
            	else
            	{
            	if(horas >= 18)// && horas <= 4)
                	{
                	printf("\nNoite");
                	}
            	}
    	}

  return 0;
}
