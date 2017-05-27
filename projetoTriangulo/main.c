#include <stdio.h>
#include <stdlib.h>

int main()
{
   int lado1, lado2, lado3;
   printf("Digite o lado 1: \n");
   scanf("%d", &lado1);
   printf("Digite o lado 2: \n");
   scanf("%d", &lado2);
   printf("Digite o lado 3: \n");
   scanf("%d", &lado3);
   int r = ehtriangulo(lado1, lado2, lado3);
   if(r==1){
        qualtipo(lado1, lado2, lado3);
   }else{
        printf("Nao formam um triangulo");
   }
    return 0;
}
