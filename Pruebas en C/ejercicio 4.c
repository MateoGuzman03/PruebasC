#include <stdio.h>
#include <stdlib.h>

int main(){

    float circunferencia, area, diametro, radio, pi;
    pi = 3,14;

    printf("Ingrese un Radio para el circulo \n");
    scanf("%f", &radio);
    diametro = radio * 2;
    circunferencia = pi * diametro;
    area = pi * radio;
    printf("La circunferencia del circulo es: %f, y el area es: %f", circunferencia, area);

    return 0;
}
