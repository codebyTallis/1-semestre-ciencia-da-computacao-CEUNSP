/*Programa realizado dia 18.03.2022*/
#include <stdio.h>
#include <stdlib.h>

//Inicio do Programa
int main(){	

//Declaração e inicialização de váriaveis 

	int a = 17, b = 3;
	int x, y;
	float z = 17 , z1, z2, preco_produto, novo_preco; 
	
	x = a / b;
	y = a % b;
	z1 = z / b;
	z2 = a / b;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("x=a/b = %d\n", x); /* DIVISÃO DE A POR B*/
	printf("O resto da divisao e y = %d\n", y); /* SOBRA DIVISÃO  ACIMA */
	printf("z = %f\n", z);
	printf("z1=z/b = %f\n", z1); /* DIVISÃO Z POR B */
	printf("z2=a/b = %f\n\n", z2); /* DIVISÃO A POR B */
	printf("z1=%f\nz2=%f\n", z1, z2);
	
//Calculadora de desconto de 9%

	printf("\nInsira o preco do produto =");
	scanf("%f",&preco_produto);
	
	novo_preco=preco_produto*0.74;
	printf("O preco do produto com 26%% de desconto e= %.2f\n",novo_preco);
	
	
	system("pause");
	return(0);
}

