#include <stdio.h>

int main(){

    int cod_peca, qtd_peca;
    double valor_peca, resultado = 0;

    int i = 0;

    for(i; i<2; i++){
        scanf("%d %d %lf", &cod_peca, &qtd_peca, &valor_peca);
        resultado += qtd_peca*valor_peca;
    }

    printf("VALOR A PAGAR: R$ %.2f\n", resultado);

    return 0;
}