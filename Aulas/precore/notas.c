#include <stdio.h>
#include "Limpeza.h"
#include "Estatistica.h"
#define N 6

int main(){

    int notas[6] = {5, 7, 8, -5, 15, 10};

    remove_negativo(notas, N);
    remove_maiorquedez(notas, N);

    for(int i = 0; i < sizeof(arr)/4; i++){
        printf("%d ", notas[i]);
    }
    printf("\n");

    printf("menor nota: %d\n", nota_min(notas, N));
    printf("maior nota: %d\n", nota_max(notas, N));
    printf("média das notas: %.2f\n", nota_media(notas, N));

    return 0;
}