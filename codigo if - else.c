#include <stdio.h>    

int main(){

    float m;

    printf("Insira a nota:\n");
    scanf("%f", &m);

    if(m < 7.0){
        printf("Reprovado(a)!\n");

    } else {
        printf("Aprovado(a)!\n");
    }
    
}