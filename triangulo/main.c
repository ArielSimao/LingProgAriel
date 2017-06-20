#include <stdio.h>
#include <stdlib.h>
int ehTriangulo(int a, int b, int c);
void verNome(int valor, int a, int b, int c);
int main()
{
    int x, y, z;
    printf("Digite tres valores para lados de triangulo \n");
    scanf("%d %d %d", &x, &y, &z);
    verNome(ehTriangulo(x, y, z), x, y, z);
}
