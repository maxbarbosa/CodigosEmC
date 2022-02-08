#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    //Executa no mínimo uma vez, enquanto o while pode não ser executado.

    int contador = 0;
    char letra;

    do
    {
        contador+=1;
        printf("\nQuantidade de vezes: %d\n", contador);
        printf("\nDigite 0 para sair do looping: \n");
        
        letra = getchar();
    }
    while (letra != '0');
    
    return 0;
}