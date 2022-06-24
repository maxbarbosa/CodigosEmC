#include <stdio.h>

    typedef struct {
        char nome[100];
        int idade;
        float altura;
    } Pessoa ;

int main(){

    Pessoa p1;

    printf("Digite o nome: \n");
    scanf("%[^\n]s", p1.nome);
    printf("Digite a idade: \n");
    scanf("%d", &p1.idade);
    printf("Digite a altura: \n");
    scanf("%f", &p1.altura);

    printf("\n");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);

    return 0;
}