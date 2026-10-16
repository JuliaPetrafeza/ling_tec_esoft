#include <stdio.h>
#include <stdlib.h>

void calc(int a, int b){
	
	if (a + 1 == b){
		printf("%d e consecutivo de %d\n", b, a);
	}
	
	if (b + 1 == a){
		printf("%d e consecutivo de %d\n", a, b);
	}
}

int ex0_ads(){
	int a, b, c, d, e;
	
	printf("Insira 5 numeros inteiros: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	calc(a, b);
	calc(a, c);
	calc(a, d);
	calc(a, e);
	
	calc(b, a);
	calc(b, c);
	calc(b, d);
	calc(b, e);
	
	calc(c, a);
	calc(c, b);
	calc(c, d);
	calc(c, e);
	
	calc(d, a);
	calc(d, b);
	calc(d, c);
	calc(d, e);
	
	calc(e, a);
	calc(e, b);
	calc(e, c);
	calc(e, d);
	
	return 0;
}

int ex1_ads(){
	float peso, altura, imc;
	
	printf("Insira o peso em kg: ");
	scanf("%f", &peso);
	
	printf("Insira a altura em metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("IMC: %.2f\n", imc);
	
	if (imc < 18.5){
		printf("Classificacao: Abaixo do peso");
	}
	else if (imc >= 18.5 && imc <= 24.9){
		printf("Classificacao: Normal");
	}
	else if (imc >= 25.0 && imc <= 29.9){
		printf("Classificacao: Acima do peso");
	}
	else if (imc >= 30.0){
		printf("Classificacao: Obeso");
	}
	
	return 0;
}

int ex2_ads(){
	int A = 6;
	int B = 0;
	int C = 0;
	
	printf("Estado inicial: A = %d | B = %d | C = %d\n", A, B, C);
	
	// Move disco 1 de A para C
	A = A - 1;
	C = C + 1;
	printf("Move disco 1: A -> C\n");
	printf("A = %d | B = %d | C = %d\n", A, B, C);
	
	// Move disco 2 de A para B
	A = A - 2;
	B = B + 2;
	printf("Move disco 2: A -> B\n");
	printf("A = %d | B = %d | C = %d\n", A, B, C);
	
	// Move disco 1 de C para B
	C = C - 1;
	B = B + 1;
	printf("Move disco 1: C -> B\n");
	printf("A = %d | B = %d | C = %d\n", A, B, C);
	
	// Move disco 3 de A para C
	A = A - 3;
	C = C + 3;
	printf("Move disco 3: A -> C\n");
	printf("A = %d | B = %d | C = %d\n", A, B, C);
	
	// Move disco 1 de B para A
	B = B - 1;
	A = A + 1;
	printf("Move disco 1: B -> A\n");
	printf("A = %d | B = %d | C = %d\n", A, B, C);
	
	// Move disco 2 de B para C
	B = B - 2;
	C = C + 2;
	printf("Move disco 2: B -> C\n");
	printf("A = %d | B = %d | C = %d\n", A, B, C);
	
	// Move disco 1 de A para C
	A = A - 1;
	C = C + 1;
	printf("Move disco 1: A -> C\n");
	printf("A = %d | B = %d | C = %d\n", A, B, C);
	
	return 0;
}



int ex0_esoftb(){

    int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
    
}

int ex1_esoftb(){

	int a, b, c;
	
	printf("Insra 3 numeros inteiros: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b || a == c || b == c){
		printf("Os numeros tem que ser distintos");
	}
	else if (a < b && b < c){
		printf("%d %d %d", a, b, c);
	}
	else if (a < c && c < b){
		printf("%d %d %d", a, c, b);
	}
	else if (b < a && a < c){
		printf("%d %d %d", b, a, c);
	}
	else if (b < c && c < a){
		printf("%d %d %d", b, c, a);
	}
	else if (c < a && a < b){
		printf("%d %d %d", c, a, b);
	}
	else if (c < b && b < a){
		printf("%d %d %d", c, b, a);
	}
	
	return 0;
}

int ex2_esoftb(){
	
	float a, b;
	int operacao;
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &a);
	
	printf("Insira o segundo valor: ");
	scanf("%f", &b);
	
	printf("Insira o codigo da operacao: ");
	scanf("%d", &operacao);
	
	if (operacao == 1){
		if (a > b){
			printf("Verdadeiro");
		}
		else{
			printf("Falso");
		}
	}
	
	else if (operacao == 2){
		if (a < b){
			printf("Verdadeiro");
		}
		else{
			printf("Falso");
		}
	}
	
	else if (operacao == 3){
		if (a == b){
			printf("Verdadeiro");
		}
		else{
			printf("Falso");
		}
	}
	
	else if (operacao == 4){
		if (a != b){
			printf("Verdadeiro");
		}
		else{
			printf("Falso");
		}
	}
	
	else{
		printf("Operador invalido");
	}
	
	return 0;
}

int ex0_esofta(){
	int a, b, c, d;
	
	printf("Insira 4 numeros inteiros: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (a%5 == 0){
		printf("%d e multiplo de 5\n", a);
	}
	if (b%5 == 0){
		printf("%d e multiplo de 5\n", b);
	}
	if (c%5 == 0){
		printf("%d e multiplo de 5\n", c);
	}
	if (d%5 == 0){
		printf("%d e multiplo de 5\n", d);
	}
}

int ex1_esofta(){
	
	int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
    
}

int ex2_esofta(){
	
	int entrada, saida;
	float valor, resultado;
	
	printf("Insira um valor: ");
	scanf("%f", &valor);
	
	printf("Insira o codigo de entrada: ");
	scanf("%d", &entrada);
	
	printf("Insira o codigo de saida: ");
	scanf("%d", &saida);
	
	if (entrada == 1 && saida == 2){
		resultado = valor * 1.8 + 32;
		printf("Resultado: %f", resultado);
	}
	
	else if (entrada == 2 && saida == 1){
		resultado = (valor - 32) / 1.8;
		printf("Resultado: %f", resultado);
	}
	
	else if (entrada == 1 && saida == 3){
		resultado = valor + 273.15;
		printf("Resultado: %f", resultado);
	}
	
	else if (entrada == 3 && saida == 1){
		resultado = valor - 273.15;
		printf("Resultado: %f", resultado);
	}
	
	else if (entrada == 4 && saida == 5){
		resultado = valor / 1609.34;
		printf("Resultado: %f", resultado);
	}
	
	else if (entrada == 5 && saida == 4){
		resultado = valor * 1609.34;
		printf("Resultado: %f", resultado);
	}
	
	else if (entrada == 8 && saida == 9){
		resultado = valor * 2.205;
		printf("Resultado: %f", resultado);
	}
	
	else if (entrada == 9 && saida == 8){
		resultado = valor / 2.205;
		printf("Resultado: %f", resultado);
	}
	
	else if (entrada == 10 && saida == 11){
		resultado = valor / 1.609;
		printf("Resultado: %f", resultado);
	}
	
	else if (entrada == 11 && saida == 10){
		resultado = valor * 1.609;
		printf("Resultado: %f", resultado);
	}
	
}

int main(int argc, char *argv[]) {
	
	int op, opcao;
	
	printf("Insira qual prova voce quer resolver: ");
	scanf("%d", &opcao);
	
	printf("Insira qual exercicio quer resolver: ");
	scanf("%d", &op);
	
	switch(opcao){
		
	case 1:
	
	switch(op){
		
		case 1:
			
			ex0_ads();
			
		break;
		
		case 2:
			
			ex1_ads();
			
		break;
		
		case 3: 
		
			ex2_ads();
			
		break;
	}
	
	break;
	
	case 2:
	
	switch(op){
		
		case 1:
			
			ex0_esofta();
			
		break;
		
		case 2:
			
			ex1_esofta();
			
		break;
		
		case 3: 
		
			ex2_esofta();
			
		break;
	}
	
	break;
	
	case 3:
	
	switch(op){
		
		case 1:
			
			ex0_esoftb();
			
		break;
		
		case 2:
			
			ex1_esoftb();
			
		break;
		
		case 3: 
		
			ex2_esoftb();
			
		break;
	}
	
	break;		
	
}
	
	return 0;
}
