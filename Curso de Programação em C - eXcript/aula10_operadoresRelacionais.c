#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int idade, idadeJovem = 17, idadeIdosa = 60;

    printf("Digite a idade de uma pessoa: ");
    scanf("%d", &idade);

    if(idade <= idadeJovem){
        printf("A idade informada é de uma pessoa jovem.");
    }

    else if(idade >= idadeIdosa){
        printf("A idade informada é de uma pessoa idosa.");
    }

    else{
        printf("A idade informada é de uma pessoa adulta.");
    }

    return 0;
}