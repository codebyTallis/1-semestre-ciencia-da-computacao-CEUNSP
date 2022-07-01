#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(){
	
    int i, j, matriz = 0;
    
     for (i = 1 ; i <= 10 ; i++){
        for(j = 1 ; j <= 10 ; j++){
        	if(j==i){
        		printf("[*]");
					}
        	else{
        		printf("[%d]", matriz);
				}
        }
        printf("\n");
    }
    printf("\n\n");
    system("pause");
}

