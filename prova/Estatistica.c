/*
    João Honorato -> 20210026680 
    Max Barbosa   -> 20210067083 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Estatistica.h"

int min(int *arr, int n){
    int menor = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < menor){
            menor = arr[i];
        }
    }

    return menor;
}

int max(int *arr, int n){
    int maior = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maior){
            maior = arr[i];
        }
    }

    return maior;
}

float media(int *arr, int n){
    float media = 0, soma = 0;
    for(int i = 0; i < n; i++){
        soma += arr[i];
    }

    media = soma/n;

    return media;
}

float mediana(int *arr, int n){
    if (n % 2 == 0){
        return (arr[n/2-1] + arr[n/2])/2.0;
    }
    else{
        return arr[n/2];
    }
}

void moda(int *arr, int n){
    int indice = 1;
    int primeiro = arr[0];
    
    while(primeiro == arr[indice]){
        indice++;
    }

    //Se todos os elementos forem iguais, a moda é qualquer elemento
    if(indice == n){
        printf("Moda: %d\n", primeiro);
    }

    else if(indice != n){
        int unico = 1;
        for(int i = 0 ; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] == arr[j]){
                    unico = 0;
                }
            }
        }
        
        //Se não há repetição de elementos, ou seja, cada elemento tem frequência igual 1, logo a moda não existe
        if(unico == 1){
            printf("\nModa: Não existe, pois todos os elementos são únicos!\n");
        }
        
        else{
            int freq[11] = {0};

            for(int i = 0; i < n; i++){
                freq[arr[i]] += 1;
                
            }

            int md = freq[0];
            for(int i = 0; i < 11; i++){
                if(freq[i] > md){
                    md = freq[i];
                }
            }

            printf("Moda: ");
            for(int i = 0; i < 11; i++){
                if(freq[i] == md){
                    printf("%d ", i);
                }
            }
        }
        
    }
    
}

float desvio_padrao(int *arr, int n){
    float dp = 0;

    for(int i = 0; i < n; i++){
        dp += pow(arr[i] - media(arr, n), 2);
    }

    return pow(dp/n, 0.5);
}