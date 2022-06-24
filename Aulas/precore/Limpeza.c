#include <stdio.h>
#include "Limpeza.h"

void remove_negativo(int *arr, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            arr[i] = 0;
        }
    }
}
void remove_maiorquedez(int *arr, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] > 10){
            arr[i] = 10;
        }
    }
}