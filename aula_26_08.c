#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, r, s;
	
	a = 10;
	b= 1;
	c = 0;
	
	r = a > b; //operação relacional
	s = a == b;
	
	printf("%d \n", r);
	printf("%d \n", s);
	
	//exercício lista 1
	
	printf("\nEntre com os valores para A B C : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) { //operação relacional
		
		r = a;
	}
	else {
		
		r = b;
	}
	if (c > r) {
		
		r = c;
	}
	
	printf("\n%d e o maior numero\n", r);
	
	//ler um número e informar se ele é par ou ímpar
	
	int n;
	
	printf("\nInsira um numero: ");
	scanf("%d", &n);
	
	if (n % 2 == 0) {
		
		printf("\nSeu numero e par");
    }	
	else {
		
		printf("\nSeu numero e impar");
	}

  //if (n % 2 == 0) printf("Seu numero e par"); else printf("Seu numero e impar");
	
	return 0;
}
