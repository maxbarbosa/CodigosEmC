#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    
    char letra;
    printf("Digite uma letra minúscula qualquer: ");
    scanf("%c", &letra);

    if (letra >= 'a'){
        printf("A letra que você digitou na forma maiúscula: %c", toupper(letra));
    }
    
    return 0;
}
