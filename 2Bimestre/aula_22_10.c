#include <stdio.h>
#include <stdlib.h>

//faça um programa que leia uma palavra e diga se ela é um palindromo

int main(){

    char palavra[20], invertida[20];
    int i, cont, palindromo;
    cont = 0;
    palindromo = 0;

    printf("Insira uma palavra: ");
    scanf("%s", palavra);

    while (palavra[cont] != '\0') {
        cont++;
    }

    for (i = 0; i < cont; i++) {
        invertida[i] = palavra[cont - 1 - i];
    }

    invertida[cont] = '\0'; //palavra[cont]

    for (i = 0; i < cont; i++){
        if (invertida[i] != palavra[i]){
            palindromo = 1;
        }
    }

    if(palindromo == 1){
        printf("A palavra %s nao e um palindromo!", palavra);
    }
    else{
        printf("A palavra %s e um palindromo!", palavra);
    }

    return 0;
}

