#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[21];
    char sobrenome[21];
    char nomecompleto[41]={'\0'};
    gets(nome);
    fflush(stdin);
    gets(sobrenome);
    printf("%s \n", nome);
    puts(sobrenome);
    strcat(nomecompleto, nome);
    strcat(nomecompleto, " ");
    strcat(nomecompleto, sobrenome);
    printf("%s \n", nomecompleto);
    return 0;
}
