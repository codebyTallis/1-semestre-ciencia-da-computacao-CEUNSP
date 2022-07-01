//Continua executando até que a condição seja atingida.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i=0;
	
	while(i<=10){
		printf("%d\n", i);
		i++;
	}
	
    printf("\n\n");
    system("pause");
}
