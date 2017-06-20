#include <stdio.h>
#include <stdlib.h>

int main()
{
    float popA = 80000.0;
    float popB = 200000.0;
    float indA = 0.04;
    float indB = 0.013;
    int anos = 0;
    while(popA < popB){
        popA+= (popA * indA);
        popB+= (popB * indB);
        anos++;
        printf("Ano:  %d \n", anos);
        printf("Pop pais A: %f.0 \n", popA);
          printf("Pop pais b: %f.0 \n", popB);
    }
    printf("Total em anos: %d \n", anos);
    return 0;
}
