#include <stdlib.h>

int search(int *array, int n, int v);

int main (){

    int arr[8] = {1, 2, 3, 5, 10, -8, 2, 1};
    printf("%d\n", search(arr, 8, 2));
    printf("%d\n", search(&arr[0], 8, 5));
    printf("%d\n", search(arr + 3, 5, 1));
    printf("%d\n", search(arr, 8, 4));

}

int search(int *array, int n, int v){
    int pos = -1;

    for (int i = 0; i < sizeof(arr)/4; i++){
        if (array[i] == v){
            pos = i;
            break;
        }
    }

    return pos;

}