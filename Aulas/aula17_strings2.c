#include <stdio.h>

int ler_linhas(char string[], int n);
int ler_espacos(char string[], int n);

int main(){

    char texto[100];
    ler_linhas(texto, 100);
    printf("%d", ler_espacos(texto, 100));

    return 0;
}

int ler_linhas(char string[], int n){
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if (i<n-1){
            string[i++] = ch;

        }
    string[i] = '\0';
    }

    return i;
}

int ler_espacos(char string[], int n){
    int i = 0, qtd = 0;

    for(i; i < n; i++){
        if (string[i] == 32){
            qtd+=1;
        }
    }
    return qtd;
}


/*
int qtdEspaco(char entrada[]);

int main(){
    char texto[100];
    scanf("%s", texto);
    printf("%d", qtdEspaco(texto));

    return 0;
}

int qtdEspaco(char entrada[]){
    int i, qtd = 0;
    
    while(i, i<sizeof(entrada) - 1, i++){
        if (entrada[i] == 32){
            qtd+=1;
        }
    }
    return qtd;
}
*/