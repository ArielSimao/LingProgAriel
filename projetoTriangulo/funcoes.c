int  ehtriangulo(int lado1,int  lado2,int  lado3){
    if ( (lado1 + lado2) > lado3 && (lado1 + lado3) > lado2 && (lado2+ lado3) > lado1 ){
        return 1;
    }else{
        return 0;
    }
}

void qualtipo(int lado1, int lado2, int lado3){
    if(lado1 == lado2 && lado1==lado3){
        printf("Triangulo equilatero \n");
        return;
    }
    if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        printf("Triangulo escaleno \n");
        return;
    }
    printf("Triangulo isosceles \n");
}
