#include <stdio.h>

int main(){

    float f, f_part;
    f = 2.53;

    f_part = f - (int) f;

    printf("%f\n", f_part);
    
    return 0;
}