#include <stdio.h>

int main(){

    int fatorial(int num);

    printf("%d", fatorial(17));

    return 0;
}

int fatorial(int n){
    if (n==1){
        return n;
    }
    else{
        return n * fatorial(n-1);
    }
    
}