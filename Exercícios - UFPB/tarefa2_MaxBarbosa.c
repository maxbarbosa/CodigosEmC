#include <stdio.h>

int main(){

    //Intervalo de representação númerica das letras
    //maiúsculas segundo a tabela ASCII de A-Z ==> [65,90]

    char letra;
    int  maior = 0, freq_letras[100] = {0};

    while (letra != '\n'){
        letra = getchar();
     
        if (letra>='A' && letra<='Z'){
            freq_letras[letra]++;
        }
    }

    for (int i=65;i<=90;i++){
            if (freq_letras[i] >= maior){
                maior = freq_letras[i];
            }
        }

    printf("\nSeu palpite deve possuir a(s) letra(s):\n");
    for (int i=65;i<=90;i++){
        if (freq_letras[i] == maior){
            printf("%c\n", i);
        }
    }
    
    return 0;
}