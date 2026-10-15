#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if (n < 0) return -1; // Tratamento para números negativos
    int fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

/* lista de exercício */

int main(int argc, char *argv[]) {
	int i, j, k, n, r;
	
	/* 
		Laço for repete um conjunto de instruções, de um valor
		inicial (nicialização), até uma determinada condição, 
		realizando uma operação (incremento) a cada execução[sempre]
	*/
	for (i = 0, j= 1; i < 10; i++, j--){
		printf("\nEsse e o laco FOR");
	}
	
	/*
		Laço WHILE (enquanto), que testa se uma condição é verdadeira,
		caso seja executa um bloco de comandos repetindo até que a 
		condição for avaliada com verdadeira
	*/
	while (i < 10){
		printf("\n%d, laco WHILE", i);
		if (n % 2 == 0) i++;
		n++;
	}
	//anotação minha: um IF que repete 
	
	/* 
		Laço DO WHILE , semelhante ao laço while, porém antes de realizar
		a verificação ele executa o conjunto de instruções para após a 
		execução realizar a verificação da condição
	*/
	do{
		printf("\n%d, laco DO WHILE", i);
		if (n % 2 == 0) i++;
		n++;
	} while (i < 10);
	
	
	//EXERCÍCIO 1
	/*Elabore um rpograma que permita a entrada de 3 valores. E conte
	do primeiro valor inserido, até o segundo valor, com o passo da 
	contagem dado pelo terceiro valor*/
	
	int a, b, c;
	
	printf("\nInsira 3 valores: ");
	scanf("%d %d %d", &a, &b, &c);
	
	for (i = a; i <= b; i+= c){
		printf("\n%d", i);
	}
	
	
	
	//EXERCÍCIO 2
	/*Faça um programa que receba um número n e realize a soma dos n
	primeiros termos da sequência dxefinida [S = 1/2; 1/4; 1/8...N]*/
	
	float soma, var;
	int numero;
	var = 0.5;
	
	printf("Insira um numero: ");
	scanf("%d", &numero);
	
	for (i = 0; i <= numero; i++){
		soma = soma + var;
		var = var * 0.5; 
	}
	
	printf("Resultado: %f", soma);
	
	
	//EXERCÍCIO 3
	/*Crie um programa que exiba na tela, o triângulo de pascal*/
	
	int d;
	float = aux
	
	printf("Insira quantas linhas voce quer: ")
	scanf("%d", &d)
	
	for (i = 0; i <= d; i++){
		for (j = 0; j <= i, j++){
			aux = fatorial(i) / (fatorial(j) * (fatorial(i - j)));
		}
	}
	
	
	for (i = 0; i <= 5; i++){
		if (i == 0) printf("\n1");
		if (i == 1) printf("\n1 1");
		if (i == 2) printf("\n1 2 1");
		if (i == 3) printf("\n1 3 3 1");
		if (i == 4) printf("\n1 4 6 4 1");
		if (i == 5) printf("\n1 5 10 10 5 1");

	}
	
	return 0;
}
