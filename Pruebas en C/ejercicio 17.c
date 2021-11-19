#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, suma, cont;
    suma = 0;

    printf("\tIngrese un numero entero\n");
    scanf("\t%i", &num);

    cont = 0;

    while(cont<=num){

        suma += cont;
        printf("\t%i\n", suma);
        cont++;

    }
    printf("\tLa suma es: %i\n", suma);





    return 0;
}
