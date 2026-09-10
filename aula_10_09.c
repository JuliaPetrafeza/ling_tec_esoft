#include <stdio.h>
#include <stdlib.h>

float calc_inss(float salario){
	if(salario <= 1412.00) return salario * 0.075; //quando é um comando só pode omitir as chaves
	else if(salario <= 2666.68) return salario * 0.09;
	else if(salario <= 4000.03) return salario * 0.12;
	else return salario * 0.14;
}

float calc_irpf(float salario){
	if (salario - calc_inss(salario) <= 2259.20) return 0;
	else if(salario - calc_inss(salario) <= 2826.65) return (salario * 0.075) - 169.44;
	else if(salario - calc_inss(salario) <=  3751.05) return (salario * 0.15) - 381.44;
	else if(salario - calc_inss(salario) <= 4664.68)  return (salario * 0.225) - 662.77;
	else return (salario * 0.275) - 896.00;
	
}



int main(int argc, char *argv[]) {
	
	float salario, desconto_inss, valor_hora, desconto_irpf, salario_liquido;
	int horas;
	
	printf("Insira o valor da sua hora: ");
	scanf("%f", &valor_hora);
	
	printf("\nInsira a quantidade de horas trabalhadas: ");
	scanf("%d", &horas);
	
	salario = valor_hora * horas;
	
	desconto_inss = calc_inss(salario);
	
	desconto_irpf = calc_irpf(salario);
	
	if (desonto_irpf == 0) {
		
	desonto_irpf = "Isento"; //é float nao recebe palavra 
}

	
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
}
