#include <stdio.h>
#include <stdlib.h>

    main()
{
    int n,num;
    printf("Digite o Numero a gerar a Tabuada :");
    scanf("%d",&num);
    n=1;
    while (n<=10)
    {
        printf("%2d * %2d = %d\n",num,n,num*n);
        n = n+1;
    }
}
