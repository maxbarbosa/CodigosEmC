#include "Estatistica.h"

int nota_min(int *arr, int n){
    int menor = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < menor){
            menor = arr[i];
        }
    }

    return menor;
}

int nota_max(int *arr, int n){
    int maior = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > maior){
            maior = arr[i];
        }
    }

    return maior;
}

float nota_media(int *arr, int n){
    float media = 0, soma = 0;
    for(int i = 0; i < n; i++){
        soma += arr[i];
    }

    media = soma/n;

    return media;
}