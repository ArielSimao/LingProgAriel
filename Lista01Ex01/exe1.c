#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area, b, h, raio, pi=3.14;
    printf("Menu.....\n");
    printf("1.. Calcular area do triangulo\n");
    printf("2.. Calcular area do circulo\n");
    printf("3.. Calcular area do paralelogramo\n");
    printf("4.. Sair\n");
    printf("Sua opcao: \n");
    int opc;
    scanf("%d", &opc);
    switch(opc){
    case 1:
        system("cls");
        printf("Calculando area do triangulo\n");
        printf("Digite o valor da base: \n");
        scanf("%f", &b);
        printf("Digite a altura: \n");
        scanf("%f", &h);
        area = (b * h) / 2;
        printf("Valor do area do triangulo:  %6.2f \n", area);
        break;
      case 2:
        system("cls");
        printf("Calculando area da circunferencia \n");
        printf("Digite o valor da raio: \n");
        scanf("%f", &raio);
        area = pi * (raio * raio);
        printf("Valor do area do circulo:  %6.2f \n", area);
        break;
    case 3:
        system("cls");
        printf("Calculando area do paralelogramo\n");
        printf("Digite o valor da base: \n");
        scanf("%f", &b);
        printf("Digite a altura: \n");
        scanf("%f", &h);
        area = b * h;
        printf("Valor do area do paralelogramo:  %6.2f \n", area);
        break;
    case 4:
        printf("FIM\n");
        break;
    default:
        printf("Opcao invalida \n");
    }
    return 0;
}
