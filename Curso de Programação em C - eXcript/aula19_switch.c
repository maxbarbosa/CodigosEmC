#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Digite um valor entre 1 e 10: ");
    scanf("%d", &num);

    switch (num){
    
    case 0:
        printf("\nO valor digitado foi 'zero'.");
        break;

    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("\nO valor digitado foi: %d", num);
        break;
    
    case 6:
        printf("\nO valor digitado foi 'seis'.");
        break;

    case 7:
        printf("\nO valor digitado foi 'sete'.");
        break;
    
    case 8:
        printf("\nO valor digitado foi 'oito'.");
        break;
    
    case 9:
        printf("\nO valor digitado foi 'nove'.");
        break;

    case 10:
        printf("\nO valor digitado foi 'dez'.");
        break;

    case 45000:
        printf("\nO valor digitado foi 'quarenta e cinco mil'.");
        break;

    default:
        printf("\nO valor digitado não está entre 1 e 10.");
    /*
    A instrução padrão será executada caso:
        1) nenhum item seja satisfatório
        2) não haja o comando break
    */
        
    }

    return 0;
}