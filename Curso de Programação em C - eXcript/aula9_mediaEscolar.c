#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float nota1, nota2, nota3, nota4, media;

    printf("=========== Média escolar 1.0 ===========\n");

    printf("Digite sua 1ª nota do bimestre: ");
    scanf("%f", &nota1);

    printf("Digite sua 2ª nota do bimestre: ");
    scanf("%f", &nota2);

    printf("Digite sua 3ª nota do bimestre: ");
    scanf("%f", &nota3);

    printf("Digite sua 4ª nota do bimestre: ");
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    printf("\nA sua média bimestral é %.2f\n", media);

    if(media >= 7){
        printf("\nAluno aprovado.");
    }
    else{
        printf("\nAluno reprovado.");
    }

    return 0;
}