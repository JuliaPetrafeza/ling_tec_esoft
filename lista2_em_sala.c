#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// unsigned int abs **com isso você transforma em um valor sem sinal
	//abs = absoluto mas na prática é o módulo da matemática
	// maior_temp = maior temporário
	
	int a, b, c, d, maior, maior_temp1, maior_temp2;
	
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//conta
	//compara os dois primeiros
	maior_temp1 = (a + b + abs(a - b)) / 2;
	
	//compara os dois ultimos
	maior_temp2 = (c + d + abs(c - d)) / 2;
	
	maior = (maior_temp1 + maior_temp2 + abs(maior_temp1 - maior_temp2)) / 2;
		
	printf("O maior entre |%d|%d|%d|%d| = %d", a, b, c, d, maior);
	
	return 0;
}
