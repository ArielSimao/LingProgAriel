#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, cont=0;
    char texto[100];
    char vogais[] = "aeiouAEIOUÁ« ";
    printf("Digite um texto: ");
    gets(texto);
    for(i=0;i<strlen(texto);i++){
            if(((int)texto[i]>=(int)'A') && ((int)texto[i]<='Z') ||
            ((int)texto[i]>=(int)'a') && ((int)texto[i]<='z') ||
             ((texto[i]==' ') || (texto[i]=='Á') || (texto[i]=='«'))){
                for(j=0;j<strlen(vogais);j++){
                    if(texto[i]==vogais[j]){
                        cont++;
                    }
                }
            }
    }
    int dif = strlen(texto) - cont;
    printf("Qtd de consoantes: %d \n", dif);
    return 0;
}



