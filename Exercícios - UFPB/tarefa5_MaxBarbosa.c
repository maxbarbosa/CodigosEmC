#include <stdio.h>

int tamanhoStr(char entrada[]);
void concatStr(int qtd_args, char *strings[], char *saida[]);

int main(int argc, char *argv[]){

    char output[100] = {'\0'};

    concatStr(argc, argv, output);

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

void concatStr(int qtd_args, char *strings[], char *saida[]){

    if(qtd_args-1 > 5){
        printf("A entrada excede o limite de 5 strings!\n");
        return;
    }

    for(int i = 1; i < qtd_args && tamanhoStr(strings[i]) <= 20; i++){
        saida[i-1] = strings[i];
        printf("%s", saida[i-1]);
    }
}