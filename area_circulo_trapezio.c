
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
	
	printf("\nAgora a area do trapezio");
	
	float base_maior, base_menor, altura, areaT;
	
	printf("Insira a base maior, a base menor e a altura do trapezio: ");
	scanf("%f", &base_maior); 
	scanf("%f", &base_menor);
	scanf("%f", &altura);  
	
	areaT = ( (base_maior * base_menor) * altura) / 2;
	
	printf("A area do trapezio de base maior %f, base menor %f e altura %f = %f", base_maior, base_menor, altura, areaT);
		
	return 0;
}
