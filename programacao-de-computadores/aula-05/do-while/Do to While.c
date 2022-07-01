//Condição necessária para acontecer

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i=0;
	
	do{
		printf("Digite um número aleatório entre 0 e 10: \n");
		scanf("%d", &i);
	}while(i!=10);
		printf("PARABÉNS VOCÊ ACERTOU!!!\n");
	
    printf("\n\n");
    system("pause");
}
