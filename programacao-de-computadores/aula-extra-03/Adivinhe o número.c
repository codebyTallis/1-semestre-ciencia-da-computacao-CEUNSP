#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
	int num;
	
	printf("Digite um numero:\n");
	scanf("%d",&num);
	if(num==10)
		{
		printf ("\nVoce acertou!\n\n");
		printf ("O numero e igual a 10.\n");
		}
else
	{
	if (num>10)
		{
		printf("O numero e maior que 10.\n\n");
		}
	else
		{
		printf("O numero e menor que 10.\n\n");
		}
	}
	system ("pause");
	return(0);
} 
