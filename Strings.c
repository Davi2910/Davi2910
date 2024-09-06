#include <stdio.h>

int main(){  // vetores de char.
    
    char s[10];
    

    printf("Digite algo (scanf convencional):\n");
    scanf("%s", s);
    fflush(stdin);

    prinf("Resultado: %s\n\n" , s);

    prinf("Digite algo (scanf convencional):\n");
    scanf("%9[^\n]s", s);
    fflush(stdin); // entrada de dados padrao.

    printf("Resultado: %s\n\n", s);
      
    
      // gets(), fgets(), puts()

}