#include <stdio.h>
#include <stdlib.h>

/* fun��o
tipo nome (lista de parametros){
	comandos
	comandos...
}
*/

void exec1 (){
	
		
	}
		
void exec3 (){
	
		/* leia um valor que represente uma temperatura em Celsius e apresente-a convertida em temperatura Fahrenheit, a f�rmula �:
	    F = C * (9.0 / 5.0) + 32.0 */
	    
	    float tempC, tempF;
	 
		printf("\nInsira a temperatura em celcius: ");
		scanf("%f", &tempC);
		 
		tempF = tempC * (9.0 / 5.0) + 32.0;
		 
		printf("Os %f C sao %f F", tempC, tempF);	
}

void exec8 (){
	
		//leia um valor inteiro que corresponde a dura��o de determinado evento em uma fabrica em segundos
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
