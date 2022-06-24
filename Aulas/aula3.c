#include <stdio.h>
#include <limits.h>


int main(){

    printf("short max: %ld\n", SHRT_MAX);
    printf("short min: %ld\n", SHRT_MIN);
    printf("int max: %ld\n", INT_MAX);
    printf("int min: %ld\n", INT_MIN);
    printf("short max: %ld\n", LONG_MAX);
    printf("short max: %ld\n", LONG_MIN);
    printf("long long max: %lld\n", __LONG_LONG_MAX__);
    printf("long long width: %lld\n", __LONG_LONG_WIDTH__);
    printf("double max: %lf\n", __DBL_MAX__);
    printf("float max: %lf\n", __FLT_MAX__);

    printf("%lu", sizeof(SHRT_MAX));
    
    return 0;
}