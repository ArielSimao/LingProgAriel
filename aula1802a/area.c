#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area, pi=3.14, raio, perimetro;
    printf("Digite o valor do Raio: \n ");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;
    printf("Valor da area:  %.2f \n", area);
    printf("Valor do perimetro: %.2f \n", perimetro);
    return 0;
}
