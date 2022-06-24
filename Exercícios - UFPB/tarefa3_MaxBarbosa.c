#include <stdio.h>

int ehPalindromo(int array[], int inicio, int fim);

int main(){

    int arr[] = {1, 2, 2, 1};
 
    if (ehPalindromo(arr, 0, sizeof(arr)/4 - 1)){
        printf("TRUE\n");
    } 
    else{
        printf("FALSE\n");
    }
        
    return 0;
}

int ehPalindromo(int array[], int inicio, int fim){
    if(inicio >= fim){
        return 1;
    }
    else if(array[inicio] == array[fim]){
        return ehPalindromo(array, inicio+1, fim-1);
    }
    else{
        return 0;
    }
}