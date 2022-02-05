#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num1, num2, soma, subtracao, multiplicacao, divisao, potencia;
    
    printf("Calculadora versão 1.0\n");
    printf("Digite dois números inteiros separados por espaço para ver o resultado das 4 operações básicas com eles: ");
    scanf("%d %d", &num1, &num2);


    soma =              num1 + num2;
    subtracao =         num2 - num1;
    multiplicacao =     num1 * num2;
    divisao =           num2 / num1;

    printf("%d + %d = %d\n", num1, num2, soma);
    printf("%d - %d = %d\n", num2, num1, subtracao);
    printf("%d * %d = %d\n", num1, num2, multiplicacao);
    printf("%d / %d = %d\n", num2, num1, divisao);

    return 0;
}