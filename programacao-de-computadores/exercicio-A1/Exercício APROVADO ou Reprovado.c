/*
Sabendo que o crit�rio para ser aprovado na disciplina �:
NOTA > = 6
PRESEN�A M�NIMA 75%

Crie um algoritmo sabendo que a nota � composta por:
A1 e A2
Sendo A1 = trabalho (2,0) e prova (3,0)
Sendo A2 = trabalho (2,0) e prova (3,0)

O algoritmo deve solicitar ao usu�rio que digite as 4 notas e a porcentagem de presen�a.

A sa�da deve ser:
�O ALUNO FOI APROVADO COM NOTA X E PRESEN�A DE X%�
Quando reprovado, deve estar escrito que foi reprovado e por qual motivo.
�O ALUNO FOI REPROVADO COM NOTA X E PRESEN�A DE X%�
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
	printf("\nOl�, seja bem vindo(a), esse programa ir� te auxiliar a verificar se o aluno foi aprovado ou n�o nesse semestre.\n");	
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");	
	printf("\nAs notas s�o respectivamente:\n2,00 para trabalhos.\n3,00 para provas.\n");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");	
	printf("\nStatus de APROVADO: nota >= 6 pontos e presen�a m�nima de 75%%.\nStatus de REPROVADO [DP]: nota < 6 pontos e presen�a inferior a 75%%.\n");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
	printf("\nNota da prova referente a A1: ");
	scanf("%f", &nP1);
		while(nP1<0||nP1>3){
			printf("Valor incorreto. Digite-o novamente seguindo as instru��es: ");
			scanf("%f", &nP1);
		}
		
	printf("\nNota da prova referente a A2: ");
	scanf("%f", &nP2);
		while(nP2<0||nP2>3){
		printf("Valor incorreto. Digite-o novamente seguindo as instru��es: ");
		scanf("%f", &nP2);
		}
	
	printf("\nNota do trabalho referente a A1: ");
	scanf("%f", &nT1);
		while(nT1<0||nT1>2){
		printf("Valor incorreto. Digite-o novamente seguindo as instru��es: ");
		scanf("%f", &nT1);
		}
	
	printf("\nNota do trabalho referente a A2: ");
	scanf("%f", &nT2);
		while(nT2<0||nT2>2){
		printf("Valor incorreto. Digite-o novamente seguindo as instru��es: ");
		scanf("%f", &nT2);
		}
	
	printf("\nPorcentagem de presen�a [%%]: ");
	scanf("%d", &porc);
		while(porc<0||porc>100){
		printf("Valor incorreto. Digite-o novamente seguindo as instru��es: ");
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
			printf("\nO aluno foi APROVADO com nota %.2f e presen�a de %d%%.", NF, porc);
		}
		else if(NF<6 && porc>=75){
			printf("\nO aluno foi REPROVADO com nota %.2f e presen�a de %d%%.", NF, porc);
		}
		else if(NF>=6 && porc<75){
			printf("\nO aluno foi REPROVADO com nota %.2f e presen�a de %d%%.", NF, porc);
		}
		else if(NF<6 && porc<75){
			printf("\nO aluno foi REPROVADO com nota %.2f e presen�a de %d%%.", NF, porc);
		}
	
	printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	printf ("\n\nObrigado por utilizar nosso sistema! Nos vemos nos pr�ximos semestres!\nby Tallis Brean
	.\n\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	system ("pause");
	return (0);
}
