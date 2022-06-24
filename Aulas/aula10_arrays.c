#include <stdio.h>

int main(){

    int array[10];
    int i = 0;

    for (i; i<10; i++){
        scanf("%d", &array[i]);

    }

    for(int k = 19; k>=10; k--){
        printf("%d\n", array[k-i]);
    }
    
    return 0;
}