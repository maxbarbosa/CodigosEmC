#include <stdio.h>

int main(){
    char letra;
    int idade;
    double preco;
    float altura;
    void; 

    unsigned char A; // caractere sem sinal
    long int B; // número inteiro, com domínio estendido
    unsigned int C; // número inteiro positivo
    unsigned long int D; // número inteiro positivo com domínio estendido
    short int E; // inteiro com domínio reduzido.
    unsigned short int F; //inteiro positivo com domínio reduzido

    letra = 'M';
    idade = 19;
    preco = 2579.371;
    altura = 1.80;

    printf("Meu nome começa com a letra %c.\n", letra);
    printf("Tenho %d anos de idade.\n", idade);
    printf("Tenho %.2f cm de altura.\n", altura);
    printf("Atualmente um notebook de entrada custa R$ %.3f no Brasil.\n", preco);

    return 0;
}