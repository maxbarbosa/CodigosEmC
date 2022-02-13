#include <stdio.h>

int main(){

    char nome[20];
    double salario_fixo, total_vendas;
    
    scanf("%s", &nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);

    printf("TOTAL = R$ %.2f\n",  salario_fixo+total_vendas*0.15);

    return 0;
}