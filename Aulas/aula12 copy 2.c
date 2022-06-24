#include <stdio.h>

void hanoi(int pecas, char orig, char dest, char aux){
    if (pecas == 1){
        printf("Mova 1 de %c para %c\n", orig, dest);
    }
    else{
        hanoi(pecas-1, orig, aux, dest);
        printf("Mova %d de %c para %c\n", pecas, orig, dest);
        hanoi(pecas-1, orig, dest, orig);
    }

}

int main(){

    int n =4;
    hanoi(n, 'A','B','C');

    return 0;
}