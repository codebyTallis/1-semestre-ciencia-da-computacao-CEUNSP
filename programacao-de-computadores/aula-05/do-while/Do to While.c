//Condi��o necess�ria para acontecer

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i=0;
	
	do{
		printf("Digite um n�mero aleat�rio entre 0 e 10: \n");
		scanf("%d", &i);
	}while(i!=10);
		printf("PARAB�NS VOC� ACERTOU!!!\n");
	
    printf("\n\n");
    system("pause");
}
