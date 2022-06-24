/*
    João Honorato -> 20210026680 
    Max Barbosa   -> 20210067083 
*/
#include "Ordenacao.h"
  
int *insertion_sort(int *arr, int n){
    int i, j, chave;
    for (i = 1; i < n; i++) {
        chave = arr[i];
        j = i-1;
 
        while (j >= 0 && arr[j] > chave) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = chave;
    }

    return arr;
}