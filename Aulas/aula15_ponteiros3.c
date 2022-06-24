#include <stdio.h>

void decomporTempo(int sec, int *hr, int *min, int *seg);

int main(){
    int segundos=3661;
    int m, h, s;

    decomporTempo(segundos, &h, &m, &s);

    printf("%dh:%dm:%ds\n", h,m,s);
}

void decomporTempo(int sec, int *hr, int *min, int *seg){

    *hr = sec/3600;
    *min = sec%3600/60;
    *seg = sec%3600%60;

}