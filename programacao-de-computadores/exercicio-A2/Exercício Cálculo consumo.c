/*
Crie um algoritmo que a partir do tempo de viagem você calcula o consumo total de combustível que esse
veículo vai consumir durante essa viagem.

Sabendo que:
Fórmula: Velocidade Média = Distancia / Tempo
Dados: Velocidade Média de 100 km/h e consumo do veículo de 12 km/L

O algoritmo deve permitir que o usuário entre com o tempo de viagem desejado.
IMPORTANTE: para a gravação do vídeo use o tempo de viagem de 1 hora e 12 minutos.
OBS: lembre-se que o usuário entra com valores em hora e minuto, então deixe claro para o usuário como
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
	
	printf ("Olá, seja bem vindo(a) ao sistema de verificação de combustível consumido por viagem!\n\n");
	printf ("Segundo nosso sistema, o modelo de seu veículo tem consumo médio de 12km/L.\n");
	printf ("E além disso, respeitando a legislação vigente na pista, sua velocidade média será igual a 100km/h!\n\n");
	
	printf ("ATENÇÃO: Nosso sistema realiza o calculo apenas utilizando minutos, sendo 1 hora equivalentes a 60 minutos, atente-se a isso!");
	printf ("\nAgora por favor, informe qual é o tempo da viagem que você pretende realizar em minutos: ");
	scanf ("%f", &tempo);
	
	tempo = tempo / 60;
	distancia = tempo * velocidade;
	litros_consumidos = distancia / 12;
	km_corridos = distancia;
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	
	printf ("\n\nSeu veículo gastará durante essa viagem exatamente: %.2f Litros.", litros_consumidos);
	printf ("\nA distância percorrida será de: %.2f KM", km_corridos);
	
	printf ("\n\nFaça uma ótima viagem!\nE nunca se esqueça do cinto de segurança! =)");
	
	printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		
	printf ("\n\nObrigado por utilizar nosso sistema!\nby Tallis Brean RGM: 29107890\n\n");
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	
	system ("pause");
	return (0);
	
}
