#include <stdio.h>

int calculaPotencia(int b, int e){
    
    if(e == 0){
        return 1;
    }
    else{
        return b * calculaPotencia(b, e-1);
        
    }

}

int main(){

    printf("%d", calculaPotencia(10,1));

    return 0;
}