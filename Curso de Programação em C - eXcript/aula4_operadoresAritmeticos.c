#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num1, num2, soma, subtracao, multiplicacao, divisao, potencia;
    num1 = 15;
    num2 = 20;

    soma =              num1 + num2;
    subtracao =         num2 - num1;
    multiplicacao =     num1 * num2;
    divisao =           num2 / num1;
    potencia =          pow(2, 6);


    printf("%d + %d = %d\n", num1, num2, soma);
    printf("%d - %d = %d\n", num2, num1, subtracao);
    printf("%d * %d = %d\n", num1, num2, multiplicacao);
    printf("%d / %d = %d\n", num2, num1, divisao);
    printf("2 ^ 6 = %d\n", potencia);
    
    printf("\nO resultado da soma de %d mais %d é igual a %d\n", num1, num2, soma);
    printf("O resultado da subtração de %d menos %d é igual a %d\n", num2, num1, subtracao);
    printf("O resultado da multiplicação de %d vezes %d é igual a %d\n", num1, num2, multiplicacao);
    printf("O resultado da divisão de %d dividido por %d é igual a %d\n", num2, num1, divisao);
    printf("2 elevado ao expoente 6 resulta em %d\n", potencia);

    return 0;
}