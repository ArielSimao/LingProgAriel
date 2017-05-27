#include <stdio.h>
#include <stdlib.h>
#define DL 3
#define DC 2
int main()
{
    int m[DL][DC] = {{0}};
    //Percorrer uma matriz
    int i, j;
    for(i=0; i<DL; i++){
        for(j=0; j<DC; j++){
            printf("Elemento [%d][%d] ====> %d \n", i,j,m[i][j]);
        }
    }
    return 0;
}
