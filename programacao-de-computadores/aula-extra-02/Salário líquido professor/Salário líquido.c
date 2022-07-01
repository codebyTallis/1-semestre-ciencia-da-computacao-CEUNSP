/*
Escreva um programa que calcule o salario l�quido de um professor. ser�o fornecidos:
. valor da hora aula
. numero de aulas dadas
. % de desconto do INSS
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float vHorasTrabalhadas, vValorHora, vPercentDesconto;
	
	printf("\nInforme a quantidade de horas trabalhadas: "); // 15 horas aula semana * 4 (60hrs m�s)
	scanf("%f",&vHorasTrabalhadas);
 
	printf("\nInforme o valor recebido por hora em R$: "); // R$ 88,14 (M�dia obtida pelo site guia da carreira)
	scanf("%f",&vValorHora);
 
	printf("\nInforme o percentual de desconto do INSS: "); // 14% (Segundo tabela do site portal tributario)
	scanf("%f",&vPercentDesconto);
 
	float vSalarioBruto = vHorasTrabalhadas * vValorHora;
	float vValorDesconto = vSalarioBruto * vPercentDesconto / 100;
	float vSalarioLiquido = vSalarioBruto - vValorDesconto;
 
	printf("\nO salario bruto e: %.2f", (vSalarioBruto));
	printf("\nO valor de desconto e: %.2f", (vValorDesconto));
	printf("\nO salario liquido e: %.2f", (vSalarioLiquido));
 
	printf("\n\n");
	system("pause");
	return(0);
}
