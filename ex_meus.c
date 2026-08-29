#include <stdio.h>

int main(){

    //troca valores
    int a, b;

    printf("Insira dois valores: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Seus valores sao: %d %d", a, b);


    //separação de um número

    int numero, unidade, dezena, centena, milhar;

    printf("\nInsira um número de 4 algarismos: ");
    scanf("%d", &numero);

    unidade = numero % 10; //1234 = 4
    dezena = (numero / 10) % 10; // 1234/10 = 123
    centena = (numero / 100) % 10;
    milhar = (numero / 1000) % 10;

    printf("\nunidade: %d", unidade);
    printf("\ndezena: %d", dezena);
    printf("\ncentena: %d", centena);
    printf("\nmilhar: %d", milhar);

    //inverso número

    int numero2;

    printf("\nInsira um numero de tres algarismos: ");
    scanf("%d", &numero2);

    unidade = numero2 % 10;
    dezena = (numero2 / 10) % 10;
    centena = (numero2 / 100) % 10;

    printf("\nnumero inverso: %d %d %d", unidade, dezena, centena);

    //inverso com pegadinha

    int numero3;

    printf("\nInsira um numero de quatro algarismos: ");
    scanf("%d", &numero3);

    unidade = numero3 % 10;
    dezena = (numero3 / 10) % 10;
    centena = (numero3 / 100) % 10;
    milhar = (numero3 / 1000) % 10;

    numero = (unidade * 1000) + (dezena * 100) + (centena * 10) + milhar;

    printf("\nNumero inverso: %d", numero);

    //transforme um tempo em segundos em h:m:s

    int tempo, segundos, minutos, horas;

    printf("\nInsira um tempo em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = (tempo % 3600) % 60;

    printf("\n%d : %d : %d", horas, minutos, segundos);

    //dinheiro

    int valor, reais, centavos, notas100, notas50, notas20, notas10, notas5, notas2, moedas1;

    printf("\nInsira um valor em centavos: ");
    scanf("%d", &valor);

    reais = valor / 100;
    centavos = valor % 100;

    printf("\nreais: %d", reais);
    printf("\ncentavos: %d", centavos);

    notas100 = reais / 100;
    notas50 = (reais % 100) / 50;
    notas20 = ((reais % 100) % 50) / 20;
    notas10 = (((reais % 100) % 50) % 20) / 10;
    notas5 =  ((((reais % 100) % 50) % 20) % 10) / 5;
    notas2 =  (((((reais % 100) % 50) % 20) % 10) % 5) / 2;
    moedas1 = ((((((reais % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    printf("\nnotas de 100: %d", notas100);
    printf("\nnotas de 50: %d", notas50);
    printf("\nnotas de 20: %d", notas20);
    printf("\nnotas de 10: %d", notas10);
    printf("\nnotas de 5: %d", notas5);
    printf("\nnotas de 2: %d", notas2);
    printf("\moedas de 1: %d", moedas1);





    return 0;
}
