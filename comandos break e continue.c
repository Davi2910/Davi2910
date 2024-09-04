#include <stdio.h>

int main(){

    int i;

    for(i=1; i<=10; i++){

        if(i == 5){
            continue; // ou break continue pula o numero e o break encerra o programa
            
        }

        printf("%d ", i);
    }
}