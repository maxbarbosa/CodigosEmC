#include <stdio.h>
 
int main(){

    int a=0, n;

    scanf("%d", &n);

    
    while (n!=0){
        a+=n;
        scanf("%d", &n);
    }
    printf("%d\n", a+=n);

    return 0;
}
