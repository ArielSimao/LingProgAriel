#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Digite dois valores \n");
    scanf("%d %d", &a, &b);
    int r = somar(a, b);
    printf("Resultado da soma %d \n", r);
}
int somar(int x, int y)
{
    int resultado;
    resultado = x + y;
    return resultado;
}
