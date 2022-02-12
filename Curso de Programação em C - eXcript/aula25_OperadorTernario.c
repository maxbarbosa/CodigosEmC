#include <stdio.h>
#include <stdlib.h>

int main(){

    // expressão ? valorTrue : valorFalse

    int num1, num2;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    /*
    if(num1 < 0)
        num2 = 0;
    else
        num2 =  num1;
    */

    num2 = (num1 < 0) ? 0 : num1;

    printf("O valor de num2 é %d", num2);

    return 0;
}