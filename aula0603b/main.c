#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int palpite, magico, cont=0;
    //numero magico = um numero entre 0 e 1999
    magico = rand() % 2000;
    while(1){
        do{
             printf("Digite o palpite de 0 a 1999: \n");
           scanf("%d", &palpite);
         }while(palpite<0||palpite>1999);
        cont++;
        if(palpite != magico){
            palpite > magico ? printf("Num. Alto\n") : printf("Num. Baixo \n");
        }else{
            printf("Voce acertou em %d tentativas \n", cont);
            break;
        }
    }
    return 0;
}
