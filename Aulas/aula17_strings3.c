#include <stdio.h>

int ler_linhas(char string[], int n);
int ler_espacos(char string[], int n);

int main(){

    char texto[100];
    ler_linhas(texto, 100);
    puts(texto);
    printf("%d", ler_espacos(texto, 100));

    return 0;
}

int qtdEspaco(char entrada[]);

int main(){
    char texto[100];
    scanf("%s", texto);
    printf("%d", qtdEspaco(texto));

    return 0;
}

int qtdEspaco(char entrada[]){
    int i = 0, qtd = 0;
    
    for(i; i<sizeof(entrada) - 1; i++){
        if (entrada[i] == 32){
            qtd+=1;
        }
    }
    return qtd;
}