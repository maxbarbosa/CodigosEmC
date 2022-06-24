/*
#include <stdio.h>
 
int main(){

    int n;

    scanf("%d", &n);

    while (n>0){
        n--;
        printf("%d\n", n);
    }
    
    return 0;
}

*/

#include <stdio.h>
 
int main(){

    int a=0,n;

    scanf("%d", &n);

    do
    {
        a+=n;
        scanf("%d", &n);

    }
    while (n!=0);

    printf("%d\n", a);
    
    return 0;
}