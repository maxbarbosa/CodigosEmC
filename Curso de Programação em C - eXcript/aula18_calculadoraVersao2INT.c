#include <stdio.h>
#include <stdlib.h>

int main(){

    int operacao = 0;
    float num1, num2, resultado;
    
    printf("=========== Calculadora versão 2.0 ===========\n");

    do{
        
        num1 = num2 = resultado = 0;
        
        printf("\n\nMenu:\n\t0 - SAIR\n\t1 - SOMAR\n\t2 - SUBTRAIR\n\t3 - MULTIPLICAR\n\t4 - DIVIDIR\n\n");
        
        printf("Digite o tipo de operação: ");
        scanf("%d", &operacao);

        if(operacao != 0){
            printf("\nDigite dois números separados por espaço: ");
            scanf("%f %f", &num1, &num2);

            if (operacao == 1){
                resultado = num1 + num2;
            }
            else if (operacao == 2)
            {
                resultado = num1 - num2;
            }
            else if (operacao == 3)
            {
                resultado = num1 * num2;
            }
            else if (operacao == 4)
            {
                resultado = num1 / num2;
            }
            else{
                printf("Operação inválida!");
            }

            printf("\n»»» O resultado da operação de é %.2f", resultado);
            
            system("clear");
        }

    }
    while (operacao != 0);
   
    return 0;
}