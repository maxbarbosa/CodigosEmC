#include <stdio.h>
#include <stdlib.h>

int lenstr(char *str);
void concat(char *fim, char *str, int n);

#define N 100

int main(int argc, char *argv[]){

    char fim[N] = "";

    if ((argc - 1) <= 5){
        for (int i = 0; i < argc - 1; i++){
            concat(fim, argv[i + 1], lenstr(argv[i + 1]));
        }
        puts(fim);
        }
    else{
        printf("Too many strings.\n");
    }
    return 0;
}

int lenstr(char *str){
    int len = 0;
    while (*str++){
        len++;
    }

    return len;
}

void concat(char *fim, char *str, int n){
    int adc = lenstr(fim);
    for (int i = 0; i < sizeof(arr)/4; i++){
        fim[adc + i] = str[i];
    }
}
