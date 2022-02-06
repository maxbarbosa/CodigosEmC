#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /*
        Operadores lógicos:

            AND                         ==> &&
            OR                          ==> ||
            NOT                         ==> !
            maior                       ==> >
            maior ou igual              ==> >=
            menor                       ==> <
            menor ou igual              ==> <=
            diferente                   ==> !=

            soma                        ==> +
            subtração                   ==> -
            multiplicação               ==> *
            divisão                     ==> /
            resto da divisão            ==> %
    */

    int num1, num2;

    printf("Digite dois números inteiros qualquer separados por espaço: ");
    scanf("%d %d", &num1, &num2);

    if(num1 != num2){
        printf("Os  números digitados são diferentes.\n");
    }
    else{
        printf("Os números digitados são iguais.\n");
    }

    if (num2 % 2 == 0){
        printf("O número %d é par.", num2);
    }
    else{
        printf("O número %d é ímpar.", num2);
    }
    
    return 0;
}