#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salBruto, imposto=0.0;
    char estCivil;
    printf("Digite o salario:  \n");
    scanf("%f", &salBruto);
    fflush(stdin);
    printf("Digite (c) casado ou (s) solteiro \n");
    estCivil = getchar();
    //imposto = estCivil=='c' ? salBruto * 0.09 : salBruto * 0.10;
    switch(estCivil){
    case 'c':
    case 'C':
        imposto = salBruto * 0.09;
        break;
    case 's':
    case 'S':
        imposto = salBruto * 0.10;
        break;
    default:
        printf("Estado civil desconhecido \n");
    }
    printf("Valor do imposto: %6.2f \n", imposto);
    return 0;
}
