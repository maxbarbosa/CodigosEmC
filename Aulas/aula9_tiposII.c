#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    char ch;
    ch = 97;

    printf("%c", ch);
    */

    for (int i = 97; i<=122; i++){
        printf("%c", i);
    }

    char l = 'a';

    for (l; l<='z'; l++){
        printf("%c\n", l);
    }

    return 0;
}