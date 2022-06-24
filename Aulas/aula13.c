#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calcArea(double lado, int figura);
double calcVolume(double base, double altura, int figura);

double calcArea(double lado, int figura){
    double resultado;

    if (figura == 1){
        resultado = pow(lado, 2);
    }

    else if (figura == 2){
        resultado = PI * pow(lado, 2);
    }

    return resultado;
}

double calcVolume(double base, double altura, int figura){
    double resultado;

    if (figura == 1){
        resultado = calcArea(base, figura) * altura;
    }

    else if (figura == 2){
        resultado = base * altura / 3;
    }

    return resultado; 
}

int main(){

    double l, b, a, result;
    int operacao = 1;
    int fig;
    
    printf("=========== Calculadora de áreas e volumes===========\n");
    while (operacao != 0){
        
        printf("\nMenu:\n\t0 - SAIR\n\t1 - ÁREA\n\t2 - VOLUME\n");
        scanf("%d", &operacao);
        
        if (operacao == 1){
            printf("\nFigura:\n\t1 - QUADRADO\n\t2 - CIRCUNFERÊNCIA\n");
            scanf("%d", &fig);

            if(operacao == 1 && fig == 1){
                printf("Digite o lado do quadrado: ");
                scanf("%lf", &l);
                result = calcArea(l, fig);
            }
            else{
                printf("Digite o raio da circunferência: ");
                scanf("%lf", &l);
                result = calcArea(l, fig);
            }
        }
        else if (operacao == 2){
            printf("\n\nFigura:\n\t1 - PIRÂMIDE\n\t2 - CILINDRO\n");
            scanf("%d", &fig);

            if(operacao == 2 && fig == 1){
                printf("Digite a base e altura da pirâmide: ");
                scanf("%lf %lf", &b, &a);
                result = calcVolume(b, a, fig);
            }
            else{
                printf("Digite a base e altura do cilindro: ");
                scanf("%lf %lf", &b, &a);
                result = calcVolume(b, a, fig);
            }
            
        }
    if (operacao != 0){
        printf("%.2f\n", result);
    }
    
    }
    return 0;
}