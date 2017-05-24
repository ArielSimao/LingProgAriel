#include <stdio.h>
#include <stdlib.h>

 main()
{
  int soma=0;
  int n;
  do{
    do{
        printf("Digite um Valor entre 0 e 19: \n");
        scanf("%d",&n);
    }while((n<0)||(n>=20));
    soma+=n;
    }while(n!=0);
    printf("Somatoria %d \n",soma);
  }
