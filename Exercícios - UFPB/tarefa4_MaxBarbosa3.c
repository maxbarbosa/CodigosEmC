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
    int i = 0, *p = array;

    for (i; i < n; i++){
        if (*p == v){
            return p - array;
        }
        p+=1;
    }
    
    return -1;
}