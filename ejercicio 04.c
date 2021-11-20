#include <stdio.h>
#include <stdlib.h>

int main(){

    float radio, pi;
    pi = 3,14;

    printf("Ingrese un Radio para el circulo \n");
    scanf("%f", &radio);
    printf("La circunferencia del circulo es: %f y el area es %f", pi*(radio*2), pi*(radio*radio));

    /*diametro = radio * 2;
    circunferencia = pi * diametro;
    area = pi * (radio * radio);
    printf("La circunferencia del circulo es: , y el area es: %f", circunferencia, area);*/

    return 0;
}
