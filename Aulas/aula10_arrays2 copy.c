#include <stdio.h>

int main(){

    int array[10], num[10], qtd_vezes[10];

    for (int i = 0; i<10; i++){
        num[i] = i;
        qtd_vezes[i] = 0;

    }
    
    for (int j = 0; j<10; j++){
        scanf("%d", &array[j]);
        if (array[j] == num[j]){
            qtd_vezes[j] +=1 ;
        }

    }

    for (int l = 0; l<10; l++){
        printf("%d, ", array[l]);
        printf("%d, ", num[l]);
        printf("%d, ", qtd_vezes[l]);
        printf("O número %d apareceu %d vez(es)\n", l, qtd_vezes[l]);

    }
    
    return 0;
}