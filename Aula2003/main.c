#include <stdio.h>
#include <stdlib.h>
#define DIMN 10
#define DIMS 40
int main()
{
     int v[DIMN];
     char nome[DIMS];
     int i;
     printf("Digite seu nome: \n");
     gets(nome);
     for(i=0; i<DIMS; i++){
            if(nome[i]!='\0'){
                 printf("Letra a Letra: %c \n", nome[i]);
            }else{
                break;
            }
     }
}
