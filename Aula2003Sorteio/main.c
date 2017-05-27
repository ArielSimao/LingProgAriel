#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()
{
    int m[T][T]={{0}} ;
    int i, j;
    for(i=0; i<T; i++){
        for(j=0;j <T; j++){
                if(i!=j) m[i][j] = (rand() % 5 )+1;
        }
    }

    for(i=0; i<T; i++){
        for(j=0;j <T; j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
