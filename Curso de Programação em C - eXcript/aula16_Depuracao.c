#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char letra;

    printf("Digite a letra \'X\': ");
    letra = getchar();

    if (letra == 'X'){
        printf("\nA letra digitada está correta.");
    }

    else{
        printf("\nA letra digitada está errada.\n");
        printf("Você digitou o caractere %c.", letra);
    }
    
    return 0;
}