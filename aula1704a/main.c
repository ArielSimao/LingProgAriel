#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5]={{0}};
    preencherDiagonal(matriz);
    imprimir(matriz);

    preencherAbaixo(matriz);
    printf("\n");
    imprimir(matriz);
    return 0;
}
void preencherDiagonal(int x[5][5]){
    int i;
    for(i=0; i<5; i++){
        x[i][i] = 5;
    }
}
void preencherAbaixo(int x[5][5]){
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i>j){
                x[i][j]=1;
            }
        }
    }
}
void imprimir(int x[5][5]){
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%3d", x[i][j]);
        }
        printf("\n");
    }
}
