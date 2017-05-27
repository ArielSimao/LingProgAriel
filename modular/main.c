#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, y, op;
    printf("Digite o primeiro valor : \n");
    scanf("%d", &x);
    printf("digite o segundo valor: \n");
    scanf("%d", &y);
    system("cls");
    printf("Operacao desejada: \n");
    printf("1.. Somar \n");
    printf("2.. Subtrair \n");
    printf("3.. Multiplicar \n");
    printf("4.. Dividir \n");
    printf("Escolha a opcao: ");
    scanf("%d", &op);
    int resultado = 0;
    switch(op){
    case 1:
        resultado = somar(x, y);
        break;
    case 2:
        resultado = subtrair(x, y);
        break;
    case 3:
        resultado = multiplicar(x, y);
        break;
    case 4:
        resultado = dividir(x, y);
        if(resultado == -1){
            printf("Nao se pode dividir por ZERO \n");
            return;
        }
        break;
    default:
        printf("Operacao inexistente \n");
    }
    printf("Resultado: %d \n", resultado);
    return 0;
}
