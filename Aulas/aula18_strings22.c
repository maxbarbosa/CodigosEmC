#include <stdio.h>
void concatStr(char string1[], char string2[]);

int main(){
    char st1[100] = "234";
    char st2[100] = "5MEIA789";

    concatStr(st1, st2);

    printf("%s", st1);

    return 0;

}

void concatStr(char string1[], char string2[]){
    
    char *p1 = string1, *p2 = string2;
    int c1 = 0, c2 = 0;

    while(*p1!='\0'){
        p1++;
        c1++;
    }

    while(*p2!='\0'){
        p2++;
        c2++;
    }

    for(int i = 0; i < c2; i++){
        string1[c1+i] = string2[i];
    }

}