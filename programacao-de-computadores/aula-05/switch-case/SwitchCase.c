// Possibilita a criação de menus.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int opcao;
	
	printf ("Por favor selecione a opção: ");
	scanf ("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("Escolha 1");
			break;
		case 2:
			printf("Escolha 2");
			break;
		case 3:
			printf("Escolha 3");
			break;
		default:
			printf("Sem escolha");
			break;
	}


    printf("\n\n");
    system("pause");
}
