#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num;

    printf("Digite um número inteiro entre 1 e 10 para ver a tabuada: ");
    scanf("%d", &num);

    while (num<1 || num>10){
        printf("O número %d não está no intervalo de 1 a 10, digite um número dentro do intervalo: ", num);
        scanf("%d", &num);
    }

    printf("\nTabuada de %d:\n\n", num);

    for(int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }

    return 0;
}