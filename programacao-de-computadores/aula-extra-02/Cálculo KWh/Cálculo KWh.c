#include<stdio.h>
#include<stdlib.h>

	float salario, kw_casa, kw; 												//variáveis definidas antes de inicar o programa

int main(){																		//inicio do programa
	printf("Digite o valor do salario minimo [R$]: ");    						//aparece a frase na tela a frase
	scanf("%f",&salario);								  						//scanf puxa o float e define o valor do salario
	printf("\nDigite o consumo da residencia em [KW]: "); 						//aparece a frase na tela a frase
	scanf("%f",&kw_casa); 							   	  						//scanf puxa o float e define o valor gasto da casa
	kw=salario/7/100; 									  						//conta para saber o valor unitário do KW
	printf("\nO valor de cada KW e [R$]: %.2f",kw);       						//resultado final do KW
	printf("\nO valor da conta e [R$]: %.2f",kw*kw_casa); 						//valor da conta 
	printf("\nO valor com desconto de 10%% e [R$]: %.2f\n\n",kw*kw_casa*0.90);  //valor de desconto
	
	system("pause");															//pausa sistema
	return(0);
	}
