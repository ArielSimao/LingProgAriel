#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[51] ;
    char sobrenome[37];
    gets(nome);
    fflush(stdin);
    gets(sobrenome);
    char completo[89]={'\0'} ;
    strcat(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);
    printf("%d \n", strlen(nome));
    printf("%d \n", strlen(sobrenome));
    printf("%s \n", completo);
    printf("%s \n", nome);
    printf("%s \n",sobrenome);
    return 0;
}
