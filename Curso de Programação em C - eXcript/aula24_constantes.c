#include <stdio.h>
#include <stdlib.h>

//#comando nome_da_constante valor

#define w 7

int main(){

    // Palavra reservada -> tipo -> valor
    const double pi = 3.14159;
    int x = pi + w;


    printf("%f \n", pi);
    printf("%d \n", w);

    printf("%.2f \n", pi + w);
    printf("%d", x);



    return 0;
}