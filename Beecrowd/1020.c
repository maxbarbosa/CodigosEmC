#include <stdio.h>

int main(){

    int qtd_dias, dia, mes, ano;
    scanf("%d", &qtd_dias);

    ano = qtd_dias/365;
    mes = qtd_dias%365/30;
    dia = qtd_dias%365%30/1;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}