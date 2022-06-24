#include <stdio.h>

int main(){

    int freq[10], n;
    //int freq[10] = {0};
    //int a[] = {1,2,3,4,5,6,7,8,9,10};
    //int a[100] = {[2] = 29, [99]=48};

    for (int i = 0; i<10; i++){
        freq[i] = 0;

    }
    
    for (int j = 0; j<10; j++){
        scanf("%d", &n);
        freq[n]++;

    }

    for (int i = 0; i<10; i++){
        printf("O número %d apareceu %d vez(es)\n", i, freq[i]);
    }
    
    return 0;
}