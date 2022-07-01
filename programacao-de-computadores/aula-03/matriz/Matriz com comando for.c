#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(){
	
    int i, j, matriz;
    
    printf("Por favor selecione o valor que deseja em sua matriz: ");
    scanf("%d", &matriz);
    
     for (i = 1 ; i <= matriz ; i++){
        for(j = 1 ; j <= matriz ; j++){
        	printf("[%d]", i,j);
        }
        printf("\n");
    }
    printf("\n\n");
    system("pause");
}

