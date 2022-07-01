#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int tabuada = 0;
	int x;

    printf("Digite o número da tabuada que você deseja: ");
    scanf("%d", &tabuada);

    for ( x = 1; x<=10; x++){	
    	printf("%d x %d = %d\n", x, tabuada, x * tabuada);
}

	system ("pause");
	return (0);

}

