#include <stdio.h>
#include <stdlib.h>

struct Carrinho{
    int codigo;
    char descricao[50];
    int quantidade;
    float preco;
}vetor[100];

int pos = 0;

void cadastrar();
void buscar(int codigo);
void imprimir();

int main()
{

    int opc=0;
    int srcprod=0;
    while(opc!=9){
        printf("  \n\n");
        printf("\t SUPERMERCADOS\n\n");
        printf("\t 1) Cadastrar item no Carrinho \n");
        printf("\t 2) Buscar item no Carrinho \n");
        printf("\t 3) Imprimir Cupom Fiscal\n");
        printf("\t 9) SAIR! \n");
        printf("\t\n\n Digite sua opcao: ");
        scanf("%d",&opc);
        system("cls");

        switch(opc){
        case 1:
            cadastrar();
            break;
        case 2:
            printf("\n\n");
            printf("Digite o Codigo do Produto: ");
            scanf("%d",&srcprod);
            buscar(srcprod);
            break;
        case 3:
            imprimir();
            break;
        case 9:
            printf("Fim \n");
            break;
            default:
            printf("\n\n");
        printf("\t OPCAO INVALIDA \n");
        printf("\n\n");
        system("pause");
        system("cls");

        }
    }
    return 0;
}

void cadastrar(){
//Entrada de dados do usuario
fflush(stdin);
printf("\n\n");
printf("Digite o Codigo do Produto: ");
scanf("%d", &vetor[pos].codigo);
fflush(stdin);
printf("\n\n");
printf("Digite a Descricao: ");
gets(vetor[pos].descricao);
fflush(stdin);
printf("\n\n");
printf("Digite a Quantidade: ");
scanf("%d",&vetor[pos].quantidade);
fflush(stdin);
printf("\n\n");
printf("Digite o Valor Unitario: ");
scanf("%f",&vetor[pos].preco);
printf("\n\n");
printf("Dados incluidos com sucesso \n");
printf("\n\n");
system("pause");
system("cls");
pos++;
}

void buscar(int codigo){
    int i;
    for(i=0;i<pos;i++){
            if(codigo==vetor[i].codigo){
            printf("\n\n");
            printf("======================== PRODUTO LOCALIZADO ======================== \n");
            printf("CODIGO      DESCRICAO           QTD     VALOR UNIT      VALOR TOTAL\n");
            printf("\n");
            printf("%d         %s                  %d        %6.2f           %6.2f\n", vetor[i].codigo, vetor[i].descricao, vetor[i].quantidade, vetor[i].preco, vetor[i].preco*vetor[i].quantidade);
            printf("\n\n");
            system("pause");
            system("cls");
            return;
            }
    }
    printf("\n\n");
    printf("Produto nao encontrado com esse Codigo\n");
    printf("\n\n");
    system("pause");
    system("cls");
    }


void imprimir(){
int i;
float total=0;
            printf("\n\n");
            printf("=========================CUPOM FISCAL============================= \n");
            printf("\n");
            printf("CODIGO      DESCRICAO           QTD     VALOR UNIT      VALOR TOTAL\n");
            printf("\n\n");
    for(i=0;i<pos;i++){
            printf("%d         %s                  %d        %6.2f            %6.2f\n", vetor[i].codigo, vetor[i].descricao, vetor[i].quantidade, vetor[i].preco, vetor[i].preco*vetor[i].quantidade);
            total+=vetor[i].preco*vetor[i].quantidade;
            }
            printf("\n=================================================================\n");
            printf("\n\n");
            printf("TOTAL A PAGAR PELOS PRODUTOS                                %6.2f\n", total);
           printf("\n\n");
            system("pause");
            system("cls");
            return;
}


