
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	
	float raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	// r2 = raio * raio ou raio *= raio
	area = pi * (raio * raio); //r2 * pi ou M_PI * pow(raio,2) 
	
	printf("A area do circulo de raio %f = %f", raio, area);
	
	return 0;
}
