#include <stdio.h>
int main(){

    int base, altura;
    float area;

    printf("Digite a base do triangulo: ");
    scanf("%d", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo e de: %f", area);






    return 0;
}
