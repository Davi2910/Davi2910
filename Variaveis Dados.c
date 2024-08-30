#include <stdio.h>
#define texto "";
 
 int main( void ){

    int idade = 0;
    float altura = 0.0;
    char nome[50];

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite o nome: \n");
    scanf("%s", &nome);

    printf("dados infomados:\n");
    printf("idade: %d.\n", idade);
    Printf("altura: %.2%\n", altura);
    printf("nome: %s\n", nome);
        

    return 0;
 }