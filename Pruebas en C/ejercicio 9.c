#include <stdio.h>
#include <stdlib.h>

int main() {

    float pulgadas, pulgada, cm, pie;
    int pies;


    printf("Ingrese una cantidad de centimetros \n");
    scanf("%f", &cm);

    pulgada = 2.54;
    pie =  30.48;
    pies = cm / pie;
    pulgadas = pie / pulgada;


    printf("pies %f \n", pies);
    printf("%f cm son %i pies y %f pulgadas", cm, pies, pulgadas);


    return 0;
}
