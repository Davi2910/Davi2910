#include <stdio.h>

int main(){

    int a;
    int b;
    int soma;
    int subtr;
    int mult;
    int divis;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &a);
    printf("Digite o segundo valor:\n");
    scanf("%d", &b);

    soma = a + b;
    subtr = a - b;
    mult= a * b;
    divis = a / b;

    printf("Resultado:\n");
    printf("Soma: %d.\n", soma);
    printf("Subtra: %d.\n", subtr);
    printf("Multiplic: %d.\n", mult);
    printf("Divis: %d.\n", divis);


    return 0;
}