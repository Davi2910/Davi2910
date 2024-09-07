#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;
  
  int main(){
    setlocale(LC_ALL, "Portuguese");

    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Inicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    prinf("pes.nome: %s\n", pes.nome);

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlteando os campos via codigo:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    printf("\nInsira um numero inteiro:\n");
    scanf("%d", &pes.idade);
    prinf("Insira um numero real:\n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Insira uma palavra:\n");
    scanf("%s, &pes.nome");

    printf("\nAlterando com dados do usuario:\n");
    prinf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    prinf("pes.nome: %s\n", pes.nome);
    

  }