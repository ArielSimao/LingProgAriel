#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[51], nome2[51]={' \0'}, sobrenome[21] = "Moraes";
    fflush(stdin);
    printf("Digite seu primeiro nome : ");
    gets(nome1);

    strcat(nome2, nome1);
    strcat(nome2, " ");
    strcat(nome2, sobrenome);


    //nome2 = nome1;
    //strcpy(nome2, nome1);
    printf("Nome  com sobrenome: %s   \n", nome2);

    return 0;
}
