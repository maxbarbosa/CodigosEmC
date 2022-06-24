#include <stdio.h>

int main(){

    int a[10] = {1,2,3,4,5,6,7,8,9,0};

    int *p = a+9;

    for(*p; *p<=10; *p--){
        printf("%d\n", *p);
    }

    return 0;

}