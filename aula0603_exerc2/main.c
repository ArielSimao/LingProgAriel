#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio numero 2... \n");
    int n;
    int soma=0;
    do{ // faça até que se digite zero para n;
        do{ //validação
            printf("Digite um valor, ou 0 para finalizar: \n");
            scanf("%d", &n);
        }while(n<0||n>=20);
        soma+= n;
    }while(n!=0);
    printf("Somatoria ===> %d \n", soma);
    return 0;
}
