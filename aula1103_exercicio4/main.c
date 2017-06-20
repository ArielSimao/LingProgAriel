#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fah=0.0, cel=0.0;
    int i;
    for(i=0; i<=100; i++){
        cel=(fah-32)/1.8;
        printf("F:  %3.3f    C: %3.3f \n", fah, cel);
        fah+= 1.0;
    }
    return 0;
}
