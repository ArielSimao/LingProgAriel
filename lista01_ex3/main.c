#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont = 0, melhorVolta;
    char continua;
    float tempo, menorTempo, media, soma=0.0;
    do{
        cont++;
        printf("Digite o tempo da volta %d: \n", cont);
        scanf("%f", &tempo);
        if(cont==1){
            melhorVolta = cont;
            menorTempo = tempo;
        }
        if(menorTempo > tempo){
            menorTempo = tempo;
            melhorVolta = cont;
        }
        soma += tempo;
        fflush(stdin);
        printf("Deseja continuar [S]im ou [N]ao ? \n");
        continua = getchar();
    }while(continua=='s'||continua=='S');
    media = soma / cont;
    printf("Melhor Volta dada => %i \n", melhorVolta);
    printf("Menor Tempo Registrado => %6.2f \n", menorTempo);
    printf("Media dos Tempos dados => %6.2f \n", media);
    return 0;
}
