#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    float b, h, area, pi=3.14, r;
    do{
        system("cls");
        printf("Calculo de Area: \n\n");
        printf("1.. Area do Triangulo \n");
        printf("2.. Area do Circulo \n");
        printf("3.. Area do Paralelogramo\n");
        printf("Opcao:  ");
        scanf("%d", &opc);
    }while(opc<0||opc>3);
    switch(opc){
    case 1:
        printf("Digite a base: \n");
        scanf("%f", &b);
        printf("Digite a altura: \n");
        scanf("%f", &h);
        area = (b*h)/2.0;
        printf("Valor da area do triangulo: %6.2f \n", area);
        break;
    case 2:
        printf("Digite o valor do raio: \n");
        scanf("%f", &r);
        area = pi * (r*r);
        printf("Valor da area do circ.: %6.2f \n", area);
        break;
    case 3:
        printf("Digite a base: \n");
        scanf("%f", &b);
        printf("Digite a altura: \n");
        scanf("%f", &h);
        area = (b*h);
        printf("Valor da area do paralelogramo.: %6.2f \n", area);
        break;
    }
    return 0;
}
