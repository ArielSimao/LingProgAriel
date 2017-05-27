#include <stdio.h>
#include <stdlib.h>

int main()
{
    char continua;
    int cont=0, soma=0, n, maior=0;
    float media;
    do{
        do{
            printf("Digite um valor para n: \n");
            scanf("%d", &n);
        }while(n<=0);
        cont++;
        soma+=n;
        if(maior<n) maior = n;
        fflush(stdin);
        printf("Deseja continuar ? [s/n]\n");
        continua = getchar();
    }while(continua=='s'||continua=='S');
    media = soma/cont;
    printf("Media dos valores: %6.2f \n", media);
    printf("Maior valor: %d\n ", maior);
    return 0;
}
