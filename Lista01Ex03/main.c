#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, mvolta, cont=0;
    float media, soma=0.0, tempo, mtempo;
    char continua='s';
    while(continua=='s'){
        cont++;
        printf("Digite o tempo da volta: %d \n", cont);
        scanf("%f", &tempo);
        if(cont==1){
            mtempo = tempo;
            mvolta = cont;
        }
        if(tempo < mtempo){
            mtempo = tempo;
            mvolta = cont;
        }
        soma += tempo;
        fflush(stdin);
        printf("Deseja continuar ?   [s/n] \n");
        continua = getchar();
    }
    media = soma / cont;
    printf("Melhor Tempo =>    %3.2f \n", mtempo);
    printf("Melhor Volta ===>   %5d\n", mvolta);
    printf("Media Tempos =->    %3.2f\n", media);
    return 0;
}
