/*
Crie um algoritmo que a partir do tempo de viagem voc� calcula o consumo total de combust�vel que esse
ve�culo vai consumir durante essa viagem.

Sabendo que:
F�rmula: Velocidade M�dia = Distancia / Tempo
Dados: Velocidade M�dia de 100 km/h e consumo do ve�culo de 12 km/L

O algoritmo deve permitir que o usu�rio entre com o tempo de viagem desejado.
IMPORTANTE: para a grava��o do v�deo use o tempo de viagem de 1 hora e 12 minutos.
OBS: lembre-se que o usu�rio entra com valores em hora e minuto, ent�o deixe claro para o usu�rio como
ele deve utilizar o algoritmo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	float distancia;
	float tempo;
	float velocidade = 100;
	float litros_consumidos;
	float km_corridos;
	
	printf ("Ol�, seja bem vindo(a) ao sistema de verifica��o de combust�vel consumido por viagem!\n\n");
	printf ("Segundo nosso sistema, o modelo de seu ve�culo tem consumo m�dio de 12km/L.\n");
	printf ("E al�m disso, respeitando a legisla��o vigente na pista, sua velocidade m�dia ser� igual a 100km/h!\n\n");
	
	printf ("ATEN��O: Nosso sistema realiza o calculo apenas utilizando minutos, sendo 1 hora equivalentes a 60 minutos, atente-se a isso!");
	printf ("\nAgora por favor, informe qual � o tempo da viagem que voc� pretende realizar em minutos: ");
	scanf ("%f", &tempo);
	
	tempo = tempo / 60;
	distancia = tempo * velocidade;
	litros_consumidos = distancia / 12;
	km_corridos = distancia;
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	
	printf ("\n\nSeu ve�culo gastar� durante essa viagem exatamente: %.2f Litros.", litros_consumidos);
	printf ("\nA dist�ncia percorrida ser� de: %.2f KM", km_corridos);
	
	printf ("\n\nFa�a uma �tima viagem!\nE nunca se esque�a do cinto de seguran�a! =)");
	
	printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		
	printf ("\n\nObrigado por utilizar nosso sistema!\nby Tallis Brean RGM: 29107890\n\n");
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	system ("pause");
	return (0);
	
}
