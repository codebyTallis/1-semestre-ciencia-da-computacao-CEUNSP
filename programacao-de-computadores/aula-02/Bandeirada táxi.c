/*
Um motorista de t�xi deseja calcular o valor de uma corrida. Sabendo-se que o pre�o
por km rodado � de R$ 2,50 e a corrida tem um valor fixo de R$ 7,50, crie um programa 
que l� a quantidade de km percorridos, e calcule o valor da corrida printando na tela 
o resultado.
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,x, total;
    
    a=2.5;
    b=7.5;
    
    printf("\nEntre com a quantidade de quilometros: ");
    scanf("%f", &x);
    
    total=((a*x)+b);
    
    printf("\n O total da corrida e: %.2f \n", total);
    system("pause");
}
