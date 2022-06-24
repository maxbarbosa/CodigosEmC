/*
    João Honorato -> 20210026680 
    Max Barbosa   -> 20210067083 
*/
#include <stdio.h>
#include "Limpeza.h"
#include "Estatistica.h"
#include "Ordenacao.h"
#define N 13

int main(){

    int notas[N] = {5, 3, 3, 8, 7, 10, 10, -5, 2, 7, 12, 9, 10};

    //EXIBIÇÃO
    //Inicia-se exibindo o conjunto de dados fornecido.
    printf("Exibindo os dados de entrada:\n");

    for(int i = 0; i < N; i++){
        printf("%d ", notas[i]);
    }
    printf("\n\n");

    //ORDENAÇÃO
    //Organiza-se os dados de entrada.
    insertion_sort(notas, N);

    printf("Exibindo os dados de forma ordenada:\n");

    for(int i = 0; i < N; i++){
        printf("%d ", notas[i]);
    }
    printf("\n\n");

    //LIMPEZA
    //Percebe-se que há anomalias na entrada. Hora de corrigi-las!

    //Primeiramente removendo as notas negativas e em seguida os valores acima de 10.
    remove_negativo(notas, N);
    remove_maiorquedez(notas, N);

    printf("Exibindo os dados após a limpeza:\n");
    for(int i = 0; i < N; i++){
        printf("%d ", notas[i]);
    }

    printf("\n\nMenor nota: %d\n", min(notas, N));
    printf("Maior nota: %d\n", max(notas, N));
    printf("Média da notas: %.2f\n", media(notas, N));
    printf("Mediana: %.2f\n", mediana(notas, N));
    moda(notas, N);
    printf("\nDesvio padrão: %.2f\n", desvio_padrao(notas, N));

    return 0;
}