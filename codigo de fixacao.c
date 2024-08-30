#include <stdio.h>

int main(){

    int a;
    int b;
    int soma;
    int subtracao;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);

    soma = a + b;
    subtracao = a - b;

    printf("Resultados:\n");

    printf("Soma: %d.\n", soma);
    printf("Subtracao: %d.\n", subtracao);

    return 0;
}