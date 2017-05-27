#include <stdio.h>
#include <stdlib.h>

int main()
{
    int razao, i;
    int serie =1;
    printf("Imprimir uma serie de 10 termos PA de razao qualquer \n");
    printf("Digite a razao: \n");
    scanf("%d", &razao);
    for(i=1; i<=10; i++){
            printf("%d  elemento ==> %d\n", i, serie);
            serie += razao;
    }
    printf("\n");
}
