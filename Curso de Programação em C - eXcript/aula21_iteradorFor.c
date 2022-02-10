#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
        for(int i = 1; i<=10; i++){
            printf("%d\n", i);
        }
    */
    
    for (int a = 0, b = 10; a<=10 && b>=0; a++, b--){
        printf("%d - %d\n", a, b);
    }

    return 0;
}