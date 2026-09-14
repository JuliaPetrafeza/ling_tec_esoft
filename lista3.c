#include <stdio.h>
#include <stdlib.h>

int main() {

    //EXERCÍCIO 2

    char grandeza;
    float temperatura, conversao;

    printf("Insira uma temperatura: ");
    scanf("%f", &temperatura);

    printf("Insira sua grandeza(F ou C): ");
    scanf(" %c", &grandeza);

    if (grandeza == 'F'){
        grandeza = 'C';
        conversao = ((temperatura - 32) * 5)/9;
    }
    if (grandeza == 'C'){
        grandeza = 'F';
        conversao = (temperatura * 9/5) + 32;
    }

    printf("\n%c : %f", grandeza, conversao);

    //EXERCÍCIO 3

    char nome[50];
    float nota1, nota2, nota3, media, exame;

    printf("\nInsira o seu nome: ");
    scanf(" %s", &nome);

    printf("\nInsira 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3)/ 3;

    if (media >= 70.0 && media <= 100.0){

        printf("\nAluno: %s", nome);
        printf("\nMedia: %f", media);
        printf("\nAPROVADO!");
    }
    else if(media >= 40.0 && media <= 69.0){

        printf("\nAluno: %s", nome);
        printf("\nMedia: %f", media);
        printf("\nEXAME!");
        exame = 100.0 - media;
        printf("\nNota que falta: %f", exame);
    }
    else {

        printf("\nAluno: %s", nome);
        printf("\nMedia: %f", media);
        printf("\nREPROVADO!");
    }
    return 0;
}
