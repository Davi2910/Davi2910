#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 20;

int main(){
    setlocale(LC_ALL, "Portuguse");

    char origem[N] = {"Ola, mundo!"};
    char destino[N];
    
    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino,origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);
// strcat para colar uma string na outra.
// strlen conta quantas strings tem ou o tamanho total da string.