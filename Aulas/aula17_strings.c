#include <stdio.h>

int tamanhoStr(char entrada[]);

int main(){
    char texto[100];
    scanf("%s", texto);
    printf("%d", tamanhoStr(texto));

    return 0;
}

int tamanhoStr(char entrada[]){
    int qtd = 0;
    char *c = entrada;
    while(*c!='\0'){
        c+=1;
        qtd+=1;
    }
    return qtd;
}
