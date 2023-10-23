#include <stdio.h>
#include "Biblioteca.h"

int main(void)
{
 
          float n1,n2,resultado;
	  int operacao;
         
	  operacao = 0;

	  printf("Vamos comecar os calculos? 1(sim) 0(sair) ");
	  scanf("%d",&operacao);
	  if(operacao==0){
		  printf("Voce saiu!");
		  return 1;
		 }else{
		 }

	  while(operacao==1){

		  printf("Escolha um valor ");
		  scanf("%f",&n1);
		  printf("Escolha outro valor ");
		  scanf("%f",&n2);

		  printf("Escolha uma operacao: 1(soma) 2(sub) 3(multi) 4(div) ");
		  scanf("%d",&operacao);
		  break;

	  }



         switch(operacao){

		 case 1:
			 resultado = soma(n1,n2);
			 break;
		case 2:
			 resultado = subtracao(n1,n2);
			 break;
		case 3:
			 resultado = multiplicacao(n1,n2);
			 break;
		case 4:
			 resultado = divisao(n1,n2);
			 if(n2==0){
				 printf("Impossivel dividir por zero!");
				 return 1;
			 }else{
			 }
			 break;

}

   
printf("Resultado: %.2f \n ", resultado);

}









