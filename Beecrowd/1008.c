#include <stdio.h>

int main(){

    int numero, hrs_trabalhadas;
    double valor_por_hora;

    scanf("%d", &numero);
    scanf("%d", &hrs_trabalhadas);
    scanf("%lf", &valor_por_hora);

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", valor_por_hora*hrs_trabalhadas);

    return 0;
}