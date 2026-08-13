#include <stdio.h>
#include <stdlib.h>
#include <math.h>>

int main(int argc, char *argv[]) {
	
	//faça um progrma que leia dois inteiros e depois os imprima na ordem inversa que foram lidos
	
	int primeiro, segundo, aux; //aux = auxiliar
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &primeiro);
	
	printf("Insira o segundo valor: ");
	scanf("%d", &segundo);
	
	// printf("%d \n %d", segundo, primeiro);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n%d", primeiro, segundo); // você tem que printar as variaveis na ordem em que elas foram lidas
	
	
	
	
	//faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica
	
	double a, b;
	
	printf("Insira um valor inteiro positivo: ");
	scanf("%lf", &a);
	
	//b = log10(double a) + 1;
	
	b 
	
	return 0;
	
}
