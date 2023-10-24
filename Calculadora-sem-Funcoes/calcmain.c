#include <stdio.h>
#include <stdlib.h>

int main(void){

	float n1,n2,resultado;
	int operacao;

	operacao = 0;

	printf("Ligar a calculadora? 1(sim) 0(sair) ");
	scanf("%d",&operacao);
	if(operacao==0){
		printf("Voce saiu!");
		return 1;
	}else{
	}

	printf("Digite um valor ");
	scanf("%f",&n1);
	printf("Digite outro valor ");
	scanf("%f",&n2);


	while(operacao == 1){
              
		printf("Escolha uma operacao: 1(soma) 2(subtracao) 3(multiplicacao) 4(divisao) ");
		scanf("%d",&operacao);
		break;
	}

	switch(operacao){

		case 1:
			resultado = n1 + n2;
			break;
		case 2:
			resultado = n1 - n2;
			break;
		case 3:
			resultado = n1 * n2;
			break;
		case 4:
			resultado = n1 / n2;
			if(n2==0){
				printf("Nao pode dividir por zero!");
				return 1;

			}else{
			    
			}
		
	}

	printf("O resultado dos calculos e: %.2f \n",resultado);



}
