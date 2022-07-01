#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	
	int m1, m2, f1, f2, mVelho, fVelha, mNovo, fNova, soma, produto;
	
	printf("Digite a idade do primeiro homem: ");
	scanf("%d", &m1);
	printf("\nDigite a idade do segundo homem: ");
	scanf("%d", &m2);
	printf("\nDigite a idade da primeira mulher: ");
	scanf("%d", &f1);
	printf("\nDigite a idade da segunda mulher: ");
	scanf("%d", &f2);
	
	//IF NUMBER 1
	if(m1 > m2){
		
		mVelho = m1;
		mNovo = m2;
	}
	else{
		mVelho = m2;
		mNovo = m1;
	}
	
	//IF NUMBER 2
	if(f1 > f2){
		
		fVelha = f1;
		fNova = f2;
	}
	else{
		fVelha = f2;
		fNova = f1;
	}
	
		soma = mVelho + fNova;
		produto = mNovo * fVelha;
		
		printf("\nA soma das idades do homem mais velho e da mulher mais nova e de: %d", soma);
		printf("\nO produto das idades do homem mais novo e da mulher mais velha e de: %d\n", produto);
		
	system ("pause");
	return(0);
}
