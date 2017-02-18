#include <stdio.h>
#include <stdlib.h>

    main()
{
    float pi = 3.14, area, raio, peri;
    printf("----------------------------------------------- \n");
    printf(" \tDigite o valor do Raio : ");
    scanf("%f",&raio);
    area = pi * (raio * raio);
    peri = 2 * pi * raio;
    printf("----------------------------------------------- \n");
    printf("\tValor da Area = %6.2f \n",area);
    printf("----------------------------------------------- \n");
    printf("\tValor do Perimetro = %6.2f \n",peri);
    printf("----------------------------------------------- \n");
}
