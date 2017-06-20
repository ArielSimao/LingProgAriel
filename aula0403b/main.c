#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    printf("Digite o sexo. [m]masculino ou [f]feminino... \n");
    scanf("%c", &sexo);
    switch(sexo){
    case 'M':
    case 'm':
        printf("Sexo marcado como masculino \n");
        break;
    case 'F':
    case 'f':
        printf("Sexo marcado como feminino\n");
        break;
    default:
        printf("Sexo nao reconhecido \n");

    }
}
