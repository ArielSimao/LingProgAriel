#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char x[10] = "ana";
    char y[10] = "zeca";
    int valor = strcmp(x,y);
    printf("%d \n", valor);
   */
    char nome[5][51];
    int i;
    for(i=0; i<5; i++){
        printf("Digite um nome: \n");
        gets(nome[i]);
    }
    for(i=0; i<5; i++){
        printf("Nome na linha %d = %s \n", i, nome[i]);
    }
    //Algoritmo de ordenacao
    char troca[51];
    int j;
    for(i=0; i<5; i++){
        for(j=i; j<5; j++){
            if(strcmp(nome[i], nome[j]) > 0){
                strcpy(troca, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], troca);
            }
        }
    }
    printf("Ordenados \n");
     for(i=0; i<5; i++){
        printf("Nome na linha %d = %s \n", i, nome[i]);
    }
}
