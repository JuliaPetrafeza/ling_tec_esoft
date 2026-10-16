#include <stdio.h>
#include <stdlib.h>

 float calc_inss(float salario){
	if(salario <= 1412.00) return salario * 0.075; //quando é um comando só pode omitir as chaves
	else if(salario <= 2666.68) return salario * 0.09;
	else if(salario <= 4000.03) return salario * 0.12;
	else return salario * 0.14;
}

float calc_irpf(float salario_base){
	if (salario_base <= 2259.20) return 0;
	else if(salario_base <= 2826.65) return (salario_base * 0.075) - 169.44;
	else if(salario_base <=  3751.05) return (salario_base * 0.15) - 381.44;
	else if(salario_base <= 4664.68)  return (salario_base * 0.225) - 662.77;
	else return (salario_base * 0.275) - 896.00;

}



int main(int argc, char *argv[]) {
    
//EXERCÍCIO 7,8,9

	float salario, desconto_inss, valor_hora, desconto_irpf, salario_liquido, salario_base;
	int horas;

	printf("Insira o valor da sua hora: ");
	scanf("%f", &valor_hora);

	printf("\nInsira a quantidade de horas trabalhadas: ");
	scanf("%d", &horas);

	salario = valor_hora * horas;

	desconto_inss = calc_inss(salario);

	salario_base = salario - calc_inss(salario);

	desconto_irpf = calc_irpf(salario_base);

	//if (desconto_irpf == 0)

	//desconto_irpf = "Isento"; //é float nao recebe palavra



	salario_liquido = salario - (desconto_inss + desconto_irpf);

	printf("======================================================\n");
	printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)    \n");
	printf("======================================================\n");
	printf("Salário Bruto (Horas x Valor):   R$ %f\n", salario);
	printf("(-) Desconto INSS:               R$ %f\n", desconto_inss);
	printf("(-) Desconto IRPF:               R$ %f\n", desconto_irpf);
	printf("------------------------------------------------------\n");
	printf(" LIQUIDO A RECEBER:               R$ %f\n", salario_liquido);
	printf("======================================================\n");
	return 0;


//EXERCÍCIO 5

    float valor;
    int nota100, nota50, nota10, nota5, nota2, nota1, reserva;

    printf("Insira um valor: ");
    scanf("%f", &valor);

    reserva = valor;

    nota100 = reserva/100;
    reserva = reserva%100;

    nota50 = reserva /50;
    reserva = reserva%50;

    nota10 = reserva/10;
    reserva = reserva %10;

    nota5 = reserva/5;
    reserva = reserva%5;

    nota2 = reserva/2;
    reserva = reserva%2;

    nota1 = reserva/1;
    reserva = reserva%1;

    printf("NOTAS\n");
    printf("Notas de 100: %d\n", nota100);
    printf("Notas de 50: %d\n", nota50);
    printf("Notas de 10: %d\n", nota10);
    printf("Notas de 5: %d\n", nota5);
    printf("Notas de 2: %d\n", nota2);
    printf("Notas de 1: %d\n", nota1);

    return 0;
}
