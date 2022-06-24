#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c){
        printf("Ambos valores são iguais.");
    }
    

    if(a>b && a>c){
        printf("A é o maior.");
    }
    else if (b>a && b>c){
        printf("B é o maior.");
    }
    else{
        printf("C é o maior.");
    }
    
    return 0;
}