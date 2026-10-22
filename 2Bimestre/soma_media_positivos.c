#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que peça ao usuário para digitar 10 números
que sejam inteiros positivos,e ignore os negativos. E mostre na tela
a soma e a média desses valores */

int main(){

    int i, numero, soma, media, positivo;

    positivo = 0;
    soma = 0;
    media = 0;

    for(i = 0; i < 10; i++){
        printf("Insira um numero inteiro positivo: ");
        scanf("%d", &numero);
        if (numero >= 0){
            positivo++;
            soma = soma + numero;
        }
    }

    media = soma/ positivo;

    printf("A soma dos %d numeros dos positivos e igual a %d e a media e igual a %d media", positivo, soma, media);

    return 0;
}
