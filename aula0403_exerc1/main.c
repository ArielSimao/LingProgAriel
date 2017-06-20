#include <stdio.h>
#include <stdlib.h>
//Exercício num 1 -  material 03
int main()
{
    float salBru, salLiq, imposto;
    printf("Digite o salario bruto do funcionario: \n");
    scanf("%f", &salBru);
    if(salBru < 1000.0){
        imposto = salBru * 0.05;
    }else{
        if(salBru < 5000.0){
            imposto = salBru * 0.11;
        }else{
            imposto = salBru * 0.35;
        }
    }
    salLiq = salBru - imposto;
    printf("Salario Bruto: %6.2f \n", salBru);
    printf("Imposto a Pagar: % 6.2f \n", imposto);
    printf("Salario Liquido: %6.2f\n", salLiq);
    return 0;
}
