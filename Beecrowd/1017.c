#include <stdio.h>

int main(){

    int gasto_horas, velocidade_media;

    scanf("%d %d", &gasto_horas, &velocidade_media);
    printf("%.3f\n", gasto_horas*velocidade_media/12.0);
    
    return 0;
}