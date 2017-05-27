#include <stdio.h>
#include <stdlib.h>

int main()
{
   // char nome[51];
    //printf("Digite seu nome !\n");
    //gets(nome);
    char nome[51];
    char outro[51] = "juca melo";
    gets(nome);
    strcpy(outro, nome);
    printf("Seu nome e=>   %s  \n", nome);
    printf("String outro   %s \n", outro);
    int i=0;
    for(i=0; i<strlen(nome); i++){
        printf("%c \n", nome[i]);
    }
    return 0;
}
