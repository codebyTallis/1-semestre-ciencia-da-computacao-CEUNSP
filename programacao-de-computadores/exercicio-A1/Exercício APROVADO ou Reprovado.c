/*
Sabendo que o critério para ser aprovado na disciplina é:
NOTA > = 6
PRESENÇA MÍNIMA 75%

Crie um algoritmo sabendo que a nota é composta por:
A1 e A2
Sendo A1 = trabalho (2,0) e prova (3,0)
Sendo A2 = trabalho (2,0) e prova (3,0)

O algoritmo deve solicitar ao usuário que digite as 4 notas e a porcentagem de presença.

A saída deve ser:
“O ALUNO FOI APROVADO COM NOTA X E PRESENÇA DE X%”
Quando reprovado, deve estar escrito que foi reprovado e por qual motivo.
“O ALUNO FOI REPROVADO COM NOTA X E PRESENÇA DE X%”
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main (){
	
	SetConsoleTitle("APROVADO ou REPROVADO");
	setlocale(LC_ALL,"Portuguese");
	
	float nP1, nP2, nT1, nT2, nPF, nTF, NF;
	int porc;
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");	
	printf("\nOlá, seja bem vindo(a), esse programa irá te auxiliar a verificar se o aluno foi aprovado ou não nesse semestre.\n");	
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");	
	printf("\nAs notas são respectivamente:\n2,00 para trabalhos.\n3,00 para provas.\n");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");	
	printf("\nStatus de APROVADO: nota >= 6 pontos e presença mínima de 75%%.\nStatus de REPROVADO [DP]: nota < 6 pontos e presença inferior a 75%%.\n");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
	printf("\nNota da prova referente a A1: ");
	scanf("%f", &nP1);
		while(nP1<0||nP1>3){
			printf("Valor incorreto. Digite-o novamente seguindo as instruções: ");
			scanf("%f", &nP1);
		}
		
	printf("\nNota da prova referente a A2: ");
	scanf("%f", &nP2);
		while(nP2<0||nP2>3){
		printf("Valor incorreto. Digite-o novamente seguindo as instruções: ");
		scanf("%f", &nP2);
		}
	
	printf("\nNota do trabalho referente a A1: ");
	scanf("%f", &nT1);
		while(nT1<0||nT1>2){
		printf("Valor incorreto. Digite-o novamente seguindo as instruções: ");
		scanf("%f", &nT1);
		}
	
	printf("\nNota do trabalho referente a A2: ");
	scanf("%f", &nT2);
		while(nT2<0||nT2>2){
		printf("Valor incorreto. Digite-o novamente seguindo as instruções: ");
		scanf("%f", &nT2);
		}
	
	printf("\nPorcentagem de presença [%%]: ");
	scanf("%d", &porc);
		while(porc<0||porc>100){
		printf("Valor incorreto. Digite-o novamente seguindo as instruções: ");
		scanf("%d", &porc);
		}
	
	nPF = nP1 + nP2;
	nTF = nT1 + nT2;
	NF = nPF + nTF;
	
	printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("\nNotas das provas A1 e A2 somadas: %.2f.", nPF);
	printf("\nNotas dos trabalhos A1 e A2 somados: %.2f.", nTF);
	printf("\nNota final: %.2f.\n", NF);
	
		if(NF>=6 && porc>=75){
			printf("\nO aluno foi APROVADO com nota %.2f e presença de %d%%.", NF, porc);
		}
		else if(NF<6 && porc>=75){
			printf("\nO aluno foi REPROVADO com nota %.2f e presença de %d%%.", NF, porc);
		}
		else if(NF>=6 && porc<75){
			printf("\nO aluno foi REPROVADO com nota %.2f e presença de %d%%.", NF, porc);
		}
		else if(NF<6 && porc<75){
			printf("\nO aluno foi REPROVADO com nota %.2f e presença de %d%%.", NF, porc);
		}
	
	printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	printf ("\n\nObrigado por utilizar nosso sistema! Nos vemos nos próximos semestres!\nby Tallis Brean
	.\n\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	system ("pause");
	return (0);
}
