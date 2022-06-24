#include <stdio.h>

int main(){
    #ifdef __APPLE__
    printf("mac\n");
    #elif __WINDOWS__
    printf("windows\n");
    #elif __linux__
    printf("linux\n");
    #else
    printf("outro\n");
    #endif

    return 0;
}