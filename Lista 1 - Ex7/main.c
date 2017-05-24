#include <stdio.h>
#include <stdlib.h>

float calcularmediadia(float n1,float n2,float n3, float media){
return(n1+n2*2+n3*3+media)/(float)7;
}
    main()
{
    int i;
    float n1,n2,n3,n4,media,
    for(i=1;i<=5;i++){
        do{
            printf("Digite a Nota 1 do Aluno %i: ",i);
            scanf("%f",&n1);
        }while((n1<0)||(n1>10));
        do{
                printf("Digite a Nota 2 do Aluno %i: ",i);
                scanf("%f",&n2);
        }while((n2<0)||(n2>10));
        do{
                printf("Digite a Nota 3 do Aluno %i: ",i);
                scanf("%f",&n3);
        }while((n3<0)||(n3>10));
        do{
            printf("Digite a Nota Exercicios %i: ",i);
            scanf("%f",&n4);
        }while((n4<0)||(n4>10));
        do{
            media = ((n1+n2+n3+n4)/7);
            printf("\n");
            if(media<=6){
                printf("Mediadia %6.2f \"REPROVADO\"",media);
            }else{
                printf("Mediadia %6.2f \"APROVADO\"",media);
            }
        }while((media<0)||(media>10));
        printf("\n");
        printf("Media Final Aluno %i = %6.2f\n",i,calcularmediadia(n1,n2,n3,media));
        printf("\n");
    }
}
