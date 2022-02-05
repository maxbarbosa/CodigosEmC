#include <stdio.h>

int main(){

    /*
    Máscaras para formatação de prints em C:

        %c para char    ==> Único caractere
        %i ou %d        ==> Inteiros
        %f ou %.Nf      ==> Float e double, onde N é a quantidade de casas decimais a serem impressas
        %u              ==> Módulo de um número
        %p              ==> Endereço de memória
        %e ou %E        ==> Números com notação científica

    Símbolos:

        \'              ==> Aspas simples
        \"              ==> Aspas duplas
        \\              ==> Contrabarra
        %%              ==> Imprime o sinal de porcentagem
        \n              ==> Quebra de linha
        \t              ==> Tabulação
        \b              ==> Retrocesso
        \f              ==> Salta página de formulário
        \0              ==> Nulo
        
    */

    //Calculando a área do retângulo

    int base = 5;
    int altura = 8;

    printf("A área do retângulo é de %d cm.\n", base*altura);

    //Parcelando compras no cartão de crédito

    double preco = 359.99;
    int parcelas = 4;

    printf("O eletrodoméstico de R$ %.2f pode ser dividido em até %d parcelas de R$ %.2f sem juros.", preco, parcelas, preco/parcelas);

    return 0;
}