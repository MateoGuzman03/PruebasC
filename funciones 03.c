#include <stdio.h>
#include <stdlib.h>

void Mostrar(char);
char Determinar(int);

void main() {

    int num;
    char resultado;

    printf("\tIngrese un numero\n"); scanf("%i", &num);

    resultado = Determinar(num);
    Mostrar(resultado);


}
char Determinar(int num){
    if(num<0)
        return 'a';
    if(num>0)
        return 'b';

    return 'c';
}

void Mostrar(char resultado){
    switch(resultado){
        case 'a': printf("\tNumero negativo");
        break;
        case 'b': printf("\tNumero positivo");
        break;
        case 'c': printf("\tIgual a 0");
        break;
        default: printf("\tLe mandaste cualquiera");
    }
}

