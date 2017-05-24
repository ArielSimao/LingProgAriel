#include <stdio.h>
#include <stdlib.h>

int ehtriangulo(int a, int b, int c);
void verNome(int valor, int a, int b, int c);

//funcao main
int main()
{
    int x,y,x;
    x=99;
    y=98;
    z=97;

    verNome(ehtriangulo(x,y,z)x,y,z);
}
/*
funcao para saber se é triangulo errada
int ehtriangulo(int a, int b, int c)
 {
    if ((a<b+c) || (b<a+c) || (c<a+b)){
        return 1;
    }else{
        return 0;
    }
}*/

// funcao correta
int ehtriangulo(int a, int b, int c)
{
    if ((a<b+c) && (b<a+c) && (c<a+b)){
        return 1;
    }else{
        return 0;
    }
}

//funcao validada e exibe triangulo
void verNome(int valor, int a, int b, int c)
{
    if(valor ==0 ){
        pritnf("nao é triangulo \n")
    }else{
        if((a==b)&&(b==C)){
        pritnf("equilatero \n")
    }else{
        if((a==b)&&(b==C)){
        pritnf("triang.  \n")
    }else{
        pritnf("triang.  \n")
    }
}
