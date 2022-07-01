#include <stdio.h>  // Tratamento de entrada/saída.
#include <stdlib.h> // 	Implementa funções para diversas operações, incluindo conversão,  alocação de memória, controle de processo, funções de busca e ordenação.
#include <locale.h> // Especifica constantes de acordo com a localização específica, como moeda, data, etc.

int main(int argc, char *argv []) {
	
	setlocale(LC_ALL, "Portuguese"); // Localidade Brasil
	
	printf("Olá mundo!!!\n"); // Printa na tela do usuário uma mensagem
	
	int variavelInteira = 10;			// inteiro
	float variavelRealFloat = 2.3;		// real de precisão simples
	double variavelRealDouble = 5.5;	// real de precisao dupla
	
	printf ("Inteira %d, float é %2.f, double é %3.f \n2", variavelInteira, variavelRealFloat, variavelRealDouble);
	
	system ("pause"); // Pausa programa
	return (0);
}
