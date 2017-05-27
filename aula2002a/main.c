#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salBruto, salLiq, imposto;
    printf("Digite o Salario Bruto: \n");
    scanf("%f", &salBruto);
    //Exemplo usando if - else
    if(salBruto < 1000.0){
        imposto = salBruto * 0.05;
    }else{
        if(salBruto<5000.0){
            imposto = salBruto * 0.11;
        }else{
            imposto = salBruto * 0.35;
        }
    }
    salLiq = salBruto - imposto;
    printf("Valores Atualizados \n");
    printf("Salario Bruto %6.2f \n", salBruto);
    printf("Salario Liquido %6.2f \n", salLiq);
    printf("Imposto a pagar %6.2f \n", imposto);
    return 0;
}
