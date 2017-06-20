#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salBru, imposto;
    char estCivil;
    printf("Digite o salario Bruto: \n");
    scanf("%f", &salBru);
    fflush(stdin);
    printf("Digite o estado civil: \n");
    estCivil = getchar();
    switch(estCivil){
    case 'C':
    case 'c':
        imposto = salBru * 0.09;
        break;
    case 'S':
    case 's':
        imposto = salBru * 0.10;
        break;
    default:
        printf("Estado civil incorreto. \n");
        return -1;
    }
    printf("Valor do imposto a pagar: %6.2f \n", imposto);
    return 0;
}
