#include <stdio.h>
#include <stdlib.h>

/* função
tipo nome (lista de parametros){
	comandos
	comandos...
}
*/

void exec2 (){
	
		//faça um programa que leia um valor em reais e a cotação do dolar, em seguida imprima o valor em dólares
		 
		float reais, cota;
		 
		printf("\nInsira a cotacao e o valor: ");
		scanf("%f %f", &cota, &reais);
		 
		printf("Os %f reais sao %f trumps", reais, (reais/cota));	
		
	}
		
void exec3 (){
	
		/* leia um valor que represente uma temperatura em Celsius e apresente-a convertida em temperatura Fahrenheit, a fórmula é:
	    F = C * (9.0 / 5.0) + 32.0 */
	    
	    float tempC, tempF;
	 
		printf("\nInsira a temperatura em celcius: ");
		scanf("%f", &tempC);
		 
		tempF = tempC * (9.0 / 5.0) + 32.0;
		 
		printf("Os %f C sao %f F", tempC, tempF);	
}

void exec8 (){
	
		//leia um valor inteiro que corresponde a duração de determinado evento em uma fabrica em segundos
	    //e depois o imprima no formato horas:minutos:segundos
	    
	    int evento, horas, minutos, segundos;
	
	    printf("\nInsira a duracao do evento em segundos: ");
	    scanf("%d", &evento);
	
	    horas = evento / 3600;
	
	    minutos = (evento - (horas % 3600)) / 60 ;
	
	    segundos = evento - ((horas % 3600) + (minutos * 60));
	
	    printf("%d : %d : %d", horas, minutos, segundos);
    
}


int main(int argc, char *argv[]) {
	
	int op;
	printf("Insira qual exercicio quer resolver(2, 3, 8): ");
	scanf("%d", &op);
	
	switch(op) {
	
	case 2:
		
		exec2();
	
	break;
	
	case 3:
	 
		exec3();
	
	break;
	
	case 8:
	 
		exec8();
    
    break;
    
}
	 
	return 0;
}
