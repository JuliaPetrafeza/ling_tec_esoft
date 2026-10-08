#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//faça um programa que leia 10 números, encontre os 5 primeiros o maior e entre os 5 últimos o menor

int compara (int a, int b){
	
	if (a < b) return b;
	else return a;
}

int main(int argc, char *argv[]) {
	
	int valores[10];
	int maior, menor, i;
	
	printf("Vamos ler os valores: \n");
	
	//para  (inicialização; verifiação; incremento)
	for ( i = 0; i < 10; i++){
		scanf("%d", &valores[i]);
	}
	
	/*maior = valores[0];	
	
	for (i = 1; i < 5; i++){
		
		if ( maior < valores[i]) maior = valores[i];
	}
	
	printf("MAIOR: 	%d", maior);*/
	
	/*for (i = 1; maior = valores[0]; i < 5; i++){
		
		if ( valores[i] > valores[i+1])
		
			if ( maior > r)
			maior = valores[i]];
			
		else maior = valores[i+1];
	}*/
	
	for (i = 1, maior = valores[0]; i < 5; i+=2){
		
		int temp = compara(valores[i], valores[i+1]);
		maior = compara(maior, temp);
	}
	
	printf("MAIOR: 	%d", maior);
	
	
	
	return 0;
}
