#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x,i, cont=0, soma=0;
    do{
        printf("Digite o valor de X: ");
        scanf("%d", &x);
    }while(x<=0);
    do{
        printf("Digite o numero de divisores que deseja saber sobre o valor %d\n", x);
        scanf("%d", &n);
    }while(n<=0||n>x);
    for(i = 1; i<=x; i++){
        if(x % i==0){
            printf("%d ", i);
            soma+= i;
            cont++;
        }
        if(cont==n)break;
    }
    printf("\nSoma dos multiplos: %d \n", soma);
    return 0;
}
