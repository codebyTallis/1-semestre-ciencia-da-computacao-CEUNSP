#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	
	int meses;
	float valorInicial, juros, valorComJuros;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &valorInicial);
	printf("\nDigite a porcentagem de juros que sera adicionado ao salario: ");
	scanf("%f", &juros);
	printf("\nDigite a quantidade de meses em que estes juros serao aplicados: ");
	scanf("%d", &meses);
	
	juros = ((juros / 100) * valorInicial) * meses;
	valorComJuros = (valorInicial + juros);
	
	printf("\n\nO valor com juros e de: %.2f", valorComJuros);
}
