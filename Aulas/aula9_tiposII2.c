#include <stdio.h>

int main(){

    char ch;
    int qtd_char;

    do{
        ch = getchar();
        if(ch == '\n'){
            break;
        }
        qtd_char++;
    }while(ch != '\n');

    printf("%d\n", qtd_char);
    
    return 0;
}