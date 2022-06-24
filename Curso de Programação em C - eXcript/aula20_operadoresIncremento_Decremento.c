#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        1) Incremento
        ------------------> Pré ou Pós
        2) Decremento

        Pré (++i) ==> o valor será incrementado/decrementado na instrução que a variável estiver contida    (MESMA LINHA)
        Pós (i++) ==> o valor será incrementado/decrementado próxima instrução                              (LINHA DEBAIXO) 

    */
    
    int i = 1;
    int j = 5;

    printf("======= Incrementando: =======\n");
    
    printf("%d \n", i);
    printf("%d \n", ++i);
    i++;
    printf("%d \n", i);

    printf("======= Decrementando: =======\n");

    printf("%d \n", j);
    printf("%d \n", --j);
    j--;
    printf("%d \n", j);

    printf("======= Tipos: =======\n");

    int k = 0;

    k = k + 7;  //permite incrementar/decrementar diversas unidades
    k += 2;     //permite incrementar/decrementar diversas unidades
    ++k;        //permite incrementar/decrementar uma ÚNICA UNIDADE

    printf("%d", k);

    return 0;
}