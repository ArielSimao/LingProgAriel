#include <stdio.h>
#include <stdlib.h>

 main()
{
   int r,pa,i;
   printf("Digite a Rasao \n");
   scanf("%d", &r);
   for (i=1;i<=10;i++){
        if(i==1){
            pa=1;
        }else{
        pa+=r;
        }
        printf(" %d", pa);
   }
   printf("\n");
}
