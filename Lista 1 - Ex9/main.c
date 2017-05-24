
#include <stdio.h>
#include <stdlib.h>

    main()
{
   int i;
   for(i = 1; i <=100;i=i+1)
    if(i == 10)
        break;
   else
    if(i%2 == 1)
        continue;
   else
    printf("%d\n",i);
   printf("fim Do Laco\n");
}
