#include <stdio.h>

int main(){

    int v[5];
    int i;

    for(i=0;i<5;i++){
        printf("Insira uma dado:\n");
        scanf("%d", &v[i]);
    }

    printf("Dados insridos:\n");
    for(i=0;i<5;i++){
        printf("%d ", v[i]);
    }


}






