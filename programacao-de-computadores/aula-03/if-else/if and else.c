/* Crie um programa que receba 3 n�meros inteiros e printe ao usu�rio o maior
dos 3 usando o comando if else*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c, resultado;
	
	printf("Digite por favor o valor do n�mero: ");
		scanf("%d", &a);
	printf("\nDigite o valor do segundo n�mero: ");
		scanf("%d", &b);
	printf("\nAgora por �ltimo o terceiro: ");
		scanf("%d", &c);
	
	if(a>b && a>c){
  		printf("\nO maior n�mero �: %d\n",a);
}	
	else if(b>c && b>a){
  		printf("\nO maior n�mero �: %d\n",b);
}
	else if (c>a && c>b){
		printf("\nO maior n�mero �: %d\n",c);
}

	system ("\npause");
	return (0);
	
}
