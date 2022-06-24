#include <stdio.h>
void concatStr(char string1[], char string2[]);

int main(){
    char st1[100] = "abc";
    char st2[100] = "def";

    concatStr(st1, st2);

    printf("%s", st1);

}

void concatStr(char string1[], char string2[]){
    
    char *p2 = string2;
    int c2 = 0;

    while(*p2!='\0'){
        p2++;
        c2++;
    }

    /*
    codigo errado
    */

    for(int i = 0; i < c2; i++){
        string1[c2+i] = string2[i];
    }

}