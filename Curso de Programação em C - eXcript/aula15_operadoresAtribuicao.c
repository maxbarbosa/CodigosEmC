#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        Operadores:

            1) +=
            2) -=
            3) *=
            4) /=
            5) %=
            6) ++
            7) --

    */

    int x = 50;

    printf("soma:           %d\n", x+=100);
    printf("subtração:      %d\n", x-=50);
    printf("multiplicação:  %d\n", x*=3);
    printf("divisão:        %d\n", x/=3);
    printf("resto:          %d", x%=3);

    return 0;
}