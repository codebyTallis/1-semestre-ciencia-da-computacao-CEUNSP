#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(){
	
	int vetorSoma [9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int i, j, index = 0;
    
     for (i = 1 ; i <= 3 ; i++){
        for(j = 1 ; j <= 3 ; j++){
        	printf("[%d]", vetorSoma [index]);
        	index++;
        }
        printf("\n");
    }
    printf("\n\n");
    system("pause");
}

