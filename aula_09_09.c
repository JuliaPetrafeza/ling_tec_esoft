#include <stdio.h>
#include <stdlib.h>

/*int multDigito( int dig, int valor){
	
	return mult = dig * valor;	
} */

int main(int argc, char *argv[]) {
	
	int cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, digito1, digito2,soma, resto;
	
	printf("Insira o seu cpf: ");
	scanf("%d", &cpf);
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);
	
	//soma = multDigito(d1,10) + multDigito(d2,9) + multDigito(d3,8) + multDigito(d4,7) + multDigito(d5,6) + multDigito(d6,5) + multDigito(d7,4) + multDigito(d8,3) + multDigito(d9,2) +
	//soma *= 10;
	//resto = soma % 11;
	//print("%d", resto);
	
	digito1 = ((d1*10 + d2*9 + d3*8 + d4*7 + d5*6 + d6*5 + d7*4 + d8*3 + d9*2) * 10) %11;
	
	if (digito1 == 10) {
		digito1 = 0;
	}
	
	digito2 = ((d1*11 + d2*10 + d3*9 + d4*8 + d5*7 + d6*6 + d7*5 + d8*4 + d9*3 + d10*2) * 10) %11;
	
	if (digito2 == 10) {
		digito2 = 0;
	}
	
	printf("\nDigito 1: %d", digito1);
	printf("\nDigito 2: %d", digito2);
	
	
	if (digito1 == d10 && digito2 == d11) {
		
		printf("Codigo valido");
	}
	else {
		
		printf("Codigo invalido");
	}
	
	
	
	
	return 0;
}
