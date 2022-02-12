#include <stdio.h>
#include <stdlib.h>

int main (){

    int codigo;
    char letra;

    printf("Digite uma letra entre A à G: ");
    scanf("%c", &letra);

    switch(letra){
        case 'A':
            codigo = 65;
            break;
        case 'B':
            codigo = 66;
            break;
        case 'C':
            codigo = 67;
            break;
        case 'D':
            codigo = 68;
            break;
        case 'E':
            codigo = 69;
            break;
        case 'F':
            codigo = 70;
            break;
        case 'G':
            codigo = 71;
            break;
        default:
            codigo = -1;
    
    }

    codigo =    (letra == 'A') ? 65 :
                (letra == 'B') ? 66 :
                (letra == 'C') ? 67 :
                (letra == 'D') ? 68 :
                (letra == 'E') ? 69 :
                (letra == 'F') ? 70 :
                (letra == 'G') ? 71 : -1;
                
    printf("\nO código ASCII da letra digitada é %d", codigo);

    return 0;
}