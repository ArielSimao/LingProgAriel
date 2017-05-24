#include <stdio.h>
#include <stdlib.h>

    main()
{
   int nvoltas, i, melhorv = 0;
   float tempo = 0.0, melhort = 0.0,soma = 0.0;
   printf("\n");
   printf("Numero de Voltas: ");
   scanf("%d", &nvoltas);
   for(i=1;i <= nvoltas; i++)
   {
       printf("Tempo da Volta %d : ",i);
       scanf("%f", &tempo);
       if(i == 1)
       {
           melhort = tempo;
           melhorv = 1;
       }
       if(tempo < melhort)
       {
           melhort = tempo;
           melhorv = i;
       }
       soma += tempo;
   }
   printf("\n");
   float media = soma/nvoltas;

   printf("\nMelhor Volta:%d , \nMelhor Tempo:%6.2ft, \nA Media de Tempo das Voltas:%6.2f \n",melhorv, melhort, media);
}
