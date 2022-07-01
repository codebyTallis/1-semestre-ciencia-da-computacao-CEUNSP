#include <stdio.h>
#include <math.h>

int main(){
	
float p, a, i;	
	printf("Peso? [KG] ");
	scanf("%f", &p);
	printf("\nAltura? [METROS] ");
	scanf("%f", &a);
	
	i = p/pow(a,2);
	
	printf ("\nIMC = %.2f\n", i);
	
	if( i > 30.0)
		printf("Obeso\n");
	else 
		printf ("Normal\n");
	
	return (0);
}
