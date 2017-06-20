#include <stdio.h>
#include <stdlib.h>

int main()
{
    char l;
    int x;
    printf("Digite um numero \n");
    scanf("%d", &x);
    fflush(stdin);
    printf("Digite uma letra \n");
    scanf("%c", &l);
    printf("Letra   %d \n", l);
    printf("Numero %d \n", x);
    return 0;
}
