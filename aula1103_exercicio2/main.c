#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0;
    int n;
    do{
        do{
            printf("\nNumeros de 0 a 19\n");
            printf("Digite um valor ou 0 para finalizar\n");
            scanf("%d", &n);
        }while(n<0||n>=20);
        soma+= n;
    }while(n!=0);
    printf("Valor da soma: %d\n", soma);
    return 0;
}
