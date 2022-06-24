#include <stdio.h>

int main(){

    int dia, mes, ano;

    scanf("%d/%d/%d", &ano, &mes, &dia);

    printf("%.2d/%.2d/%.4d\n", dia, mes, ano);

    return 0;
}