#include <stdio.h>
#include <math.h>

int main(){

    const double pi = 3.14159;
    double raio;

    scanf("%lf", &raio);

    printf("VOLUME = %.3f\n", 4/3.0 * pi * pow(raio, 3));
    return 0;
}