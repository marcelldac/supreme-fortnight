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
	printf("Quandos funcionários tem na empresa?\n");
	scanf("%d", &sec.funcionarios);
	printf("Qual o capital total investido na empresa?\n");
	scanf("%f", &sec.capital);
	
	printf("---------EMPRESA SEC---------\n\n\n");
	printf("\nQuantidade de funcionários:\t%d", sec.funcionarios);
	printf("\nCapital investido:\t%f R$", sec.capital);
}
