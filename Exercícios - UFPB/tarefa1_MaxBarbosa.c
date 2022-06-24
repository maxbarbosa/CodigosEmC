#include <stdio.h>

int main(){

    int qtd_digitos = 0, cont = 1, ordem = 10, n;

    scanf("%d", &n);

    while (n>=0 && n<=999999999){
        if (n<ordem){
            qtd_digitos += cont;
            break; 
        }

        ordem*=10;
        cont +=1;
    }

    printf("%d\n", qtd_digitos);
    
    return 0;
}