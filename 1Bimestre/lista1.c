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


	// implemente um programa que leia um numero n (com n positivo e n <= 64)e mostra na tela o seu valor em base binaria(bits)

	/* 	int n, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2, resultado;
	printf("Entre com o valor para a conversao: ");
	scanf("%d", &n);
	
	bit_64 = n%2;
	resultado = n/2;
	
	bit_32 = resultado%2;
	resultado = resultado/2;
	
	bit_16 = resultado%2;
	resultado = resultado/2;
	
	bit_8 = resultado%2;
	resultado = resultado/2;
	
	bit_4 = resultado%2;
	resultado = resultado/2;
	
	bit_2 = resultado%2;
	resultado = resultado/2;
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n, resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64); */

    int n;
    int auxiliar;
    int bit1, bit2, bit3, bit4, bit5, bit6, bit7;

    printf("\nInsira um valor positivo menor ou igual a 64: ");
    scanf("%d", &n);

    auxiliar = n;

    bit1 = auxiliar / 64;
    auxiliar = auxiliar - bit1 * 64;

    bit2 = auxiliar / 32;
    auxiliar = auxiliar - bit2 * 32;

    bit3 = auxiliar / 16;
    auxiliar = auxiliar - bit3 * 16;

    bit4 = auxiliar / 8;
    auxiliar = auxiliar - bit4 * 8;

    bit5 = auxiliar / 4;
    auxiliar = auxiliar - bit5 * 4;

    bit6 = auxiliar / 2;
    auxiliar = auxiliar - bit6 * 2;

    bit7 = auxiliar / 1;
    auxiliar = auxiliar - bit7 * 1;

    printf("%d %d %d %d %d %d %d", bit1, bit2, bit3, bit4, bit5, bit6, bit7);

    /* faça um programa que leia o salario fixo e o valor total em vendas de um vendedor, sabendo que este vendedor ganha 15% de comissão
    sobre suas vendas efetuada, mostre o total a receber no fim do mês, com duas casas decimais */

    double salarioF, salarioT, vendas; //salarioF = salario fixo   salarioT = salario total

    printf("\nInsira o seu salario fixo e o total de vendas: ");
    scanf("%lf", &salarioF);
    scanf("%lf", &vendas);

    salarioT = salarioF + ((vendas * 15) / 100);

    printf("O total a receber no fim do mes e igual a %.2lf", salarioT);

    /* elabore um programa que peça ao usuário para digitar 4 valores, e mostre na tela a soma, a media e o produtório desses valores */

    double valor1, valor2, valor3, valor4, soma, media, produtorio;

    printf("\nInsira 4 valores: \n");
    scanf("%lf", &valor1);
    scanf("%lf", &valor2);
    scanf("%lf", &valor3);
    scanf("%lf", &valor4);

    soma = valor1 + valor2 + valor3 + valor4;
    media = soma / 4;
    produtorio = valor1 * valor2 * valor3 * valor4;

    printf("A soma dos valores e igual a %lf, a media e igual a %lf e o produtorio e igual a %lf", soma, media, produtorio);

    /* leia um valor inteiro correspondente a idade de uma pessoa em dias e informe-a em anos, meses e dias */

    int idade, ano, meses, dias;

    printf("\nInsira a sua idade em dias: ");
    scanf("%d", &idade);

    ano = idade / 365;
    meses = idade / 30;
    dias = idade;

    printf("A sua idade em anos e igual a %d, em meses igual a %d e em dias igual a %d", ano, meses, dias);

    /* faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio(R), a formula para calcular calcular o volume e
    (4/3) * pi * R3 */

    double R, pi, volume;
    pi = 3.14159;

    printf("\nInsira o raio da esfera: ");
    scanf("%lf", &R);

    volume = (4.0/3.0) * pi * (R * R * R);

    printf("O volume da esfera e igual a %lf", volume);

    /* leia os quatro valores do usuario correspondentes as coordenadas em um plano cartesiano, p1(x1,y1) e p2(x2,y2),e calcule e mostre
    a distancia entre eles, sabendo que d = raiz((x2 - x1)^2 + (y2 - y1)^2) */

    int x1, y1, x2, y2, d;

    printf("\nVALORES p1");
    printf("\nInsira os valores de x1 e y1: ");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("VALORES p2");
    printf("Insira os valores de x2 e y2: ");
    scanf("%d", &x2);
    scanf("%d", &y2);

    d = sqrt(((x2 - x1)*(x2 - x1))+ ((y2 - y1)* (y2 - y1)));

    printf("A distancia entre os pontos é de: %d", d);

	return 0;

}
