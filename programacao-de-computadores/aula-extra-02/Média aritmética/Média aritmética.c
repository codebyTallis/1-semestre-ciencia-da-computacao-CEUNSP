/*
Escreva um programa que informe três números inteiros e imprimir a média aritimética.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float num1, num2, num3, media;
	
	printf("Informe o primeiro numero inteiro: ");
	scanf("%f",&num1);
	
	printf("Informe o segundo numero inteiro: ");
	scanf("%f",&num2);
	
	printf("Informe o terceiro numero inteiro: ");
	scanf("%f",&num3);
	
	(media = (num1+num2+num3) /3);
	
	printf("\nA media aritimetica dos tres numeros informados e: %.2f\n\n", media);
	
	system("pause");
	return (0);
}
