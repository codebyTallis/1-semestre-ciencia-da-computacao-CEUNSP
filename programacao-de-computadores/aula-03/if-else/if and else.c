/* Crie um programa que receba 3 números inteiros e printe ao usuário o maior
dos 3 usando o comando if else*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c, resultado;
	
	printf("Digite por favor o valor do número: ");
		scanf("%d", &a);
	printf("\nDigite o valor do segundo número: ");
		scanf("%d", &b);
	printf("\nAgora por último o terceiro: ");
		scanf("%d", &c);
	
	if(a>b && a>c){
  		printf("\nO maior número é: %d\n",a);
}	
	else if(b>c && b>a){
  		printf("\nO maior número é: %d\n",b);
}
	else if (c>a && c>b){
		printf("\nO maior número é: %d\n",c);
}

	system ("\npause");
	return (0);
	
}
