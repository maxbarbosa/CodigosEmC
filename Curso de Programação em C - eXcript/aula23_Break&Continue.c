#include <stdio.h>
#include <stdlib.h>

int main(){

    for(int x = 0; x<=10; x++){

        if (x == 2){ //quando x for igual a 2 interrompa somente o laço atual
            printf("- \n", x);
            continue;
        }

        if (x == 8){ //quando x for igual a 8 o looping será finalizado
            printf("- \n", x);
            break;
        }

        printf("%d \n", x);
    }

    return 0;
}