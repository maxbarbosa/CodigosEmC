#include <stdio.h>

int main(){

    int i;
    int *p = &i;

    printf("%d\n", *p);
    printf("%d\n", p);
    printf("%d\n", &i);
}