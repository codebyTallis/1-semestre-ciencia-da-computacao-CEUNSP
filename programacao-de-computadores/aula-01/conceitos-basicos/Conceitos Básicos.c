#include <stdio.h>  // Tratamento de entrada/sa�da.
#include <stdlib.h> // 	Implementa fun��es para diversas opera��es, incluindo convers�o,  aloca��o de mem�ria, controle de processo, fun��es de busca e ordena��o.
#include <locale.h> // Especifica constantes de acordo com a localiza��o espec�fica, como moeda, data, etc.

int main(int argc, char *argv []) {
	
	setlocale(LC_ALL, "Portuguese"); // Localidade Brasil
	
	printf("Ol� mundo!!!\n"); // Printa na tela do usu�rio uma mensagem
	
	int variavelInteira = 10;			// inteiro
	float variavelRealFloat = 2.3;		// real de precis�o simples
	double variavelRealDouble = 5.5;	// real de precisao dupla
	
	printf ("Inteira %d, float � %2.f, double � %3.f \n2", variavelInteira, variavelRealFloat, variavelRealDouble);
	
	system ("pause"); // Pausa programa
	return (0);
}
