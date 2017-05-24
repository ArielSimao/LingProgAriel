#include <stdio.h>
#include <stdlib.h>

 main()
{
   int par,i,soma=0;
   for(i=1;i<=10;i++){
    printf("Introduza um Numero: ");
    scanf("%d",&par);
        if (par%2 == 0){
            soma=soma+1;
        }
   }
            printf("Esses  numeros pares: %d  ",soma);

   printf("\n");
}
