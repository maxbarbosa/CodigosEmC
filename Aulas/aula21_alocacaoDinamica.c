#include <stdio.h>
#include <stdlib.h>

int *fill(int v, int n);

int main(){

    int V, N, *teste;
    scanf("%d", &V);
    scanf("%d", &N);

    teste = fill(V, N);

    for(int j = 0; j < N; j++){
        printf("%d\n", teste[j]);
    }
    
}

int *fill(int v, int n){

    int *arr;
    arr = malloc(sizeof(v)*n);

    for(int i = 0; i < n; i++){
        arr[i] = v;
    }

    return arr;
}