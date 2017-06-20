#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par=0;
    int n, i;
    for(i=1; i<=10; i++){
        printf("Digite o %d. valor: ", i);
        scanf("%d", &n);
        par += n%2==0 ? 1 : 0;
    }
    printf("Quantidade de pares %d \n", par);
    return 0;
}
