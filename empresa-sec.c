#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"");
	struct empresa {
		int funcionarios;
		float capital;
	};
	struct empresa sec;
	
	printf("---------EMPRESA SEC---------\n\n\n");
	printf("Quandos funcion�rios tem na empresa?\n");
	scanf("%d", &sec.funcionarios);
	printf("Qual o capital total investido na empresa?\n");
	scanf("%f", &sec.capital);
	
	printf("---------EMPRESA SEC---------\n\n\n");
	printf("\nQuantidade de funcion�rios:\t%d", sec.funcionarios);
	printf("\nCapital investido:\t%f R$", sec.capital);
}
