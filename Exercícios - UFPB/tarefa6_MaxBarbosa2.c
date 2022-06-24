#include <stdio.h>
#include <stdlib.h>

int *seqFibonacii(int n);

int main(){

    int N;
    printf("Digite a quantidade de elementos da sequência Fibonacci que deseja ver:\n");
    scanf("%d", &N), printf("\n");

    

    return 0;
}

int *seqFibonacii(int n){
    int *fib;
    fib = malloc(sizeof(int)*n);

    fib[0] = 1, fib[1] = 1;

    for(int i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
 
    return fib;
}