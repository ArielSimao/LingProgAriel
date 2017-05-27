#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, juros;
    int dias;
    printf("Digite o valor da duplicata \n");
    scanf("%f", &valor);
    printf("Digite os dias de atraso \n");
    scanf("%d", &dias);
    juros = valor * (dias * 0.0003);
    printf("Juros a pagar: %6.2f\n", juros);
    return 0;
}
