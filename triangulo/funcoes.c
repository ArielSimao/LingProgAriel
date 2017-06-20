int ehTriangulo(int a, int b, int c)
{
    if((a < b+c) && (b < c+a) && (c < a+b)){
        return 1;
    }else{
        return 0;
    }
}
void verNome(int valor, int a, int b, int c){
    if(valor==0){
        printf("Nao eh triangulo \n");
    }else{
        if((a==b) && (b==c)){
            printf("Tring. equilatero \n");
            return;
        }
        if((a!=b) && (a!=c) && (b!=c)){
            printf("Escaleno \n");
            return;
        }
        printf("Tring. Isosceles \n");
    }
}

