#include <stdio.h>
#include <stdlib.h>

int main(){

    int cont = 0, valorDigitado;

    printf("Digite um número inteiro representando a quantidade de vezes que deseja repetir uma frase na tela: ");
    scanf("%d", &valorDigitado);

    while (cont<valorDigitado){
        printf("%d \n", cont*10);
        cont++;
    }

    return 0;
}