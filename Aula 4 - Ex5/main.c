#include <stdio.h>
#include <stdlib.h>

    main()
{
   int numero, i, soma=0, menor=99999999, maior=0;
   float media=0;
   for(i=1;i<=5;i++){
   printf("Digite um Numero: ");
   scanf("%d",&numero);
   fflush(stdin);

        if (numero>maior){
          maior = numero;
        }

        if(numero<menor){
          menor = numero;
        }

   soma = (soma + numero);
   media = (soma / 5);
   }
    printf("\n");
    printf("\t 0 Maior Valor digitado \t: %6d\n ",maior);
    printf("\t 0 Menor Valor digitado \t: %6d\n ",menor);
    printf("\t A Soma dos Valores     \t: %6d\n ",soma);
    printf("\t A Media dos Valores    \t: %6.2f\n",media);
}
