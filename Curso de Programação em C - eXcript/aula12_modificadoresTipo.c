#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /*

        Tipos primitivos de váriaveis em C:

            1) char
            2) int
            3) float
            4) double
            5) void

        Modificadores de tipo:

            *Todos são aplicáveis à INT
            *Apenas alguns funcionam com FLOAT/DOUBLE

            1) signed       ==> números Positivos e Negativos
            2) unsigned     ==> números Positivos
            3) long         ==> aumentar a capacidade de armazenamento da váriavel (quando for trabalhar com números que possuem grande quantidade de dígitos)
            4) short        ==> reduzir a capacidade de armazenamento

            «Não é possível usar SHORT com DOUBLE»

    */

    char                        a;
    int                         b;
    float                       c;
    double                      d;
    short int                   e;
    long int                    f;
    signed short int            g;
    unsigned short int          h;
    signed long int             i;
    unsigned long int           j;


    printf("Bytes reservados para CHAR:                 %d \n", sizeof(a));
    printf("Bytes reservados para INT:                  %d \n", sizeof(b));
    printf("Bytes reservados para FLOAT:                %d \n", sizeof(c));
    printf("Bytes reservados para DOUBLE:               %d \n", sizeof(d));
    printf("Bytes reservados para SHORT INT:            %d \n", sizeof(e));
    printf("Bytes reservados para LONG INT:             %d \n", sizeof(f));
    printf("Bytes reservados para SIGNED SHORT INT:     %d \n", sizeof(g));
    printf("Bytes reservados para UNSIGNED SHORT INT:   %d \n", sizeof(h));
    printf("Bytes reservados para SIGNED LONG INT:      %d \n", sizeof(i));
    printf("Bytes reservados para UNSIGNED LONG INT:    %d \n", sizeof(j));

    return 0;
}