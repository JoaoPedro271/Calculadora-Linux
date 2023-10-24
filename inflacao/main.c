#include <stdio.h>
#include <stdlib.h>

int main(void){

	float preco, novopreco;

	printf("Insira o preco do produto desejado: ");
	scanf("%f",&preco);
	
	if(preco < 100){

		novopreco = preco * 1.10;
		printf("O produto custa: %.2f \n",novopreco," reais");

	}else{
	       novopreco = preco * 1.20;
	       printf("O produto custa: %.2f \n",novopreco," reais");

	     }

        return 0;
}
