#include <stdio.h>
#include <stdlib.h>

int *seqFibonacci(int n);

int main(){

    int N = 0;
    printf("Digite o número de elementos da sequência Fibonacci que deseja ver:\n");
    scanf("%d", &N), printf("\n");

    int *seq = seqFibonacci(N);
    for(int i = 0; i < N-1; i++){
        printf("%d -> ", seq[i]);
    }
    printf("%d", seq[N-1]), printf("\n");

    return 0;
}

int *seqFibonacci(int n){
    int *fib;
    fib = malloc(sizeof(int)*n);

    fib[0] = fib[1] = 1;

    for(int i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
 
    return fib;
}