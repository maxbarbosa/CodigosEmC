#include <stdio.h>

int main(){

    int i;
    int *p = &i;
    printf("Digite um inteiro: \n");
    scanf("%d", &i);
    
    printf("%d\n", i);

    *p = 5;
    //i = *p;

    printf("%d\n", i);
    printf("%d\n", &i);
    printf("%d\n", p);
    printf("%d\n", *p);

}