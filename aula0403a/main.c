#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite valor para x: ");
    scanf("%d", &x);
    int quad;
    quad = x<0 ? (x * x)*-1 : x * x;
    printf("Quadrado %d \n", quad);
    return 0;
}
