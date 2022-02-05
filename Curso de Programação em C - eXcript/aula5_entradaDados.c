#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /*
    Sintaxe:
        * Leitura de uma única váriavel por linha       ==> scanf("%tipo_var", &nome_var);
        * Leitura de múltiplas váriaveis por linha      ==> scanf("%tipo_var1 %tipo_var2", &nome_var1, &nome_var2);
    */

    int base, altura;
    int n1, n2, n3;

    printf("Digite a medida da base do triângulo: ");
    scanf("%d", &base);

    printf("Digite a medida da altura do triângulo: ");
    scanf("%d", &altura);

    printf("A área do triângulo é mede %d.\n\n", (base*altura)/2);


    printf("Digite três números inteiros separados por espaço: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("%d+%d+%d = %d", n1, n2, n3, n1+n2+n3);

    return 0;
}
