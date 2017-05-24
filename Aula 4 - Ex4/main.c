#include <stdio.h>
#include <stdlib.h>

 main()
{
    float c;
    int i;
    for (i=0;i<=100; i++){
       c=((i-32)/1.8);
        printf("Fahrenheit de \t%d\t = \tCelcius %6.2f\n",i,c);
    }
}
