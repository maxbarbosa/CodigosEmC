#include <stdio.h>
#include <stdlib.h>

int main(){

    //Em C não existe o tipo _boolean_ nativamente, apenas criando classe ou ENUM

    int i = 75;
    int condicao_Verdadeira = i>20 && i<100;
    //int condicao_F = ! (i>20 && i<100);

    printf("%d\n", condicao_Verdadeira);
    printf("%d\n", ! condicao_Verdadeira);
    
    /*
    Tabela verdade do OR » || « em C
        
        F || F ==> F
        F || T ==> T
        T || T ==> T
        T || F ==> T
    
    */

    system("clear");

    int x = 10, condicao;

    condicao = x==9 || x<1;
    printf("%d\n", condicao);

    condicao = x>10 || x==10;
    printf("%d\n", condicao);

    condicao = x>=10 || x<20;
    printf("%d\n", condicao);

    condicao = x>=10 || x%2==1;
    printf("%d\n", condicao);

    return 0;
}