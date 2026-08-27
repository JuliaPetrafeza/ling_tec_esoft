#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){

    /*construa um programa que receba dois valores.
    E verifique se els são positivos ou negativos,
    caso sejam positivos, verifique se são menores que 10,
    caso sejam verifique se são primos,
    e mostre a area e hipotenusa do triangulo por eles formado.
    Caso não sejam primos, mostrte as operações basicas entre eles.
    Caso sejam maiores que 10, mostre se são multíplos um pelo outro.
    Caso não sejam positivos mostre seu inverso */

    int a, b, soma, subt, mult;
    double  area, hipotenusa, divisao;

    printf("Insira dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a >= 0 && b >= 0) {

        if (a < 10 && b < 10){

            if ((a == 2 || a == 3 || a == 5 || a == 7) && (b == 2 || b == 3 || b == 5 || b == 7)) {

                    area = (a * b)/2;
                    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
                    printf("\nA  area e igual a %lf e a hipotenusa %lf", area, hipotenusa);
            }
            else {

                    soma = a + b;
                    subt = a - b;
                    mult = a * b;
                    divisao = a / b;
                    printf("\nA soma e igual a %d", soma);
                    printf("\nA subtracao e igual a %d", subt);
                    printf("\nA multiplicacap e igual a %d", mult);

                    if (b != 0) {
                    divisao = (double)a / b;
                    printf("\nA divisao e igual a %lf", divisao);
                    }
                    else {
                        printf("\nNao e possivel dividir por zero");
                    }

            }
        }

        else if (a % b == 0 || b % a == 0 ){

            printf("\nEles sao multiplos um do outro");
        }
        else {
            printf("\nNao sao multiplos");
        }
    }
    else {
        
        if (a < 0){
        printf("\nO inverso de %d e igual a 1/%d", a, a);
        }
        else {
            printf("%d nao e negativo", a);
        }
        if (b < 0){
        printf("\nO inverso de %d e igual a 1/%d", b, b);
        }
        else {
            printf("%d nao e negativo", b);
        }
    }


    return 0;
}
