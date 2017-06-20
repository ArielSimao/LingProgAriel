#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[51];
    fflush(stdin);
    printf("Digite seu nome : ");
    gets(nome);
    printf("Nome digitado: %s   \n", nome);
    int i;
    for(i=0; i<strlen(nome); i++){

       printf("%c \n", nome[i]);
    }
    return 0;
}
