#include <stdio.h>
#include <string.h>

void concatStr(int qtd_args, char *strings[]);

int main(int argc, char *argv[]){

    concatStr(argc, argv);

    return 0;
}

void concatStr(int qtd_args, char *strings[]){

    if(qtd_args-1 > 5){
        printf("A entrada excede o limite de 5 strings!\n");
        return;
    }

    for(int i = 1; i < qtd_args; i++){
        for(int j = 0; j < strlen(strings[i]) && strlen(strings[i]) <= 20; j++){
            printf("%c", strings[i][j]);
        }
    }
    
}