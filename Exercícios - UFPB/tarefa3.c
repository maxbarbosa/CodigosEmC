#include<stdio.h>
#include<stdlib.h>

int main(){
    //Exercício de Tipos e Arrays
    //A tabela ASCII foi usada

    int max = 0;
    int letras[100] = {0}; 
    char x;
    char n;

    printf("\nOlá, Tudo bem? Este é um simulador simples de WORDLE.\n ");
    printf("\nVamos começar. Primeiro, me diga as palavras para o usuario tentar acertar:\n");
    while(n != '\n'){
        n = getchar();
        if(n >= 'A' && n<= 'Z'){
            letras[n]++;
        }
    } 

    for(x=65;x<=90;x++){
        if(letras[x] >= max){
            max = letras[x];
        }
    }

    printf("\nHmm, será que você consegue? Tente alguma palavra com as seguintes letras:\n");
    for(x=65;x<=90;x++){
        if(letras[x] == max){
        printf("%c\n", x);
    }
    }
    return 0;
}