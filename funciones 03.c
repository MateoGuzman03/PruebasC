#include <stdio.h>
#include <stdlib.h>

int Mostrar();
int Determinar();

void main() {

    int num, mostrar ;

    printf("\tIngrese un numero\n"); scanf("%i", &num);

    mostrar=Mostrar(num);

    printf("\t%i\n", mostrar);
}
int Mostrar(int num, int resultado){
    int determinar = Determinar(num);

    return resultado;
}

int Determinar(int num){
    int resultado;
    if(num==0){
        resultado = printf("\tEs igual a 0\n");
    }
    else if(num>0){
        resultado = printf("\tEs positivo\n");
    }
    else if(num<0){
        resultado = printf("\tEs negativo\n");
    }
    return resultado;
}
