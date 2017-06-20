#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int razao, pa=1;
    printf("Digite a razao para a PA: \n");
    scanf("%d", &razao);
    for(i=1; i<=10; i++){
            printf("%d ", pa);
            pa+=razao;
    }
    printf("\nTermino da PA\n");
    return 0;
}
