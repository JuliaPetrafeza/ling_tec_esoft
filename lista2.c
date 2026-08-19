#include <stdio.h>

int main(){

    //faça um programa que calcule o ano de nacsimento de uma pessoa a partir de sua idade e ano atual

    int idade, ano, data;

    printf("Insira a dus idade: ");
    scanf("%d", &idade);

    printf("Insira o ano atual: ");
    scanf("%d", &ano);

    data = ano - idade;

    printf("O ano em que voce nasceu foi: %d", data);

    /* leia uma velocidade em km/h e apresente convertida em m/s, a formula é: M = K/36 */

    double K, M;

    printf("\nInsira a velocidade em km/h: ");
    scanf("%lf", &K);

    M = K/36;

    printf("A velocidade em m/s e igual a: %lf", M);

    //faça um programa que leia um valor em reais e a cotação do dolar, em seguida imprima o valor em dólares

    double reais, cotacao, dolar;

    printf("\nInsira um valor em reais: ");
    scanf("%lf", &reais);

    printf("Insira a cotacao do dolar: ");
    scanf("%lf", &cotacao);

    dolar = reais * cotacao;

    printf("O valor em dolares e igual a: %lf", dolar);

    /* leia um valor que represente uma temperatura em Celsius e apresente-a convertida em temperatura Fahrenheit, a fórmula é:
    F = C * (9.0 / 5.0) + 32.0 */

    double C, F;

    printf("\nInsira uma temperatura em Celsius: ");
    scanf("%lf", &C);

    F = C * (9.0 / 5.0) + 32.0;

    printf("A temperatura em fahrenheit e igual a: %lf", F);

    //leia um angulo em graus e apresente-o convertido em radianos R = G * p/ 180 p=

    double R, G, p;
    p = 3.141592;

    printf("\nInsira um angulo em graus: ");
    scanf("%lf", &G);

    R = (G * p) / 180;

    printf("Esse angulo em radianos equivale a: %lf", R);

    //faça um programa que leia um numero e retorne seu antecessor e sucessor

    int x, antecessor,sucessor;

    printf("\nInsira um valor inteiro: ");
    scanf("%d", &x);

    antecessor = x - 1;
    sucessor = x + 1;

    printf("O antecessor desse numero e igual a %d, e o sucessor e igual a %d", antecessor, sucessor);

    /* A importância de **R$ 780.000,00** será dividida entre três ganhadores de um concurso, sendo que:

    * O primeiro receberá **46% do total**.
    * O segundo receberá **32% do total**.
    * O terceiro receberá **o restante**.
    **Calcule e imprima a quantia recebida por cada um dos ganhadores.**/

    double primeiro, segundo, terceiro;

    primeiro = (780000.0 * 46) / 100;

    segundo = (780000.0 * 32) / 100;

    terceiro = 780000.0 - (primeiro + segundo);

    printf("\nO primeiro ganhador recebera R$ %lf, o segundo R$ %lf, e o terceiro R$ %lf", primeiro, segundo, terceiro);

    //leia um valor inteiro que corresponde a duração de determinado evento em uma fabrica em segundos
    //e depois o imprima no formato horas:minutos:segundos

    int evento, horas, minutos, segundos;

    printf("\nInsira a duracao do evento em segundos: ");
    scanf("%d", &evento);

    horas = evento / 3600;

    minutos = (evento % 3600) / 60 ;

    segundos = (evento % 3600) % 60 ;

    printf("%d : %d : %d", horas, minutos, segundos);

    /*Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem,
     ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa.
    Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h).
    Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.*/

    int tempoViagem;
    double velocidade, distancia, litros;

    printf("\nInsira o tempo gasto na viagem(em horas): ");
    scanf("%d", &tempoViagem);

    printf("Insira a velocidade media durante a viagem: ");
    scanf("%lf", &velocidade);

    distancia = velocidade * tempoViagem;

    litros = distancia / 12;

    printf("A distancia percorrida foi de %.3lf, e foram gastos %.3lf litros", distancia, litros);

    /*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem **“eh o maior”**. Utilize a fórmula:
    MaiorAB = (a + b + abs(a − b)) / 2
    **Obs.:** A fórmula apenas calcula o maior entre os dois primeiros (**A e B**).
    Um segundo passo, portanto, é necessário para chegar no resultado esperado.*/

    int a, b, c, maiorAB, maior;
  
    printf("\nDigite um numero: ");
    scanf("%d", &a);
  
    printf("\nDigite um numero: ");
    scanf("%d", &b);

    printf("\nDigite um numero: ");
    scanf("%d", &c);

    maiorAB = (a + b + abs(a - b)) / 2;

    maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}
