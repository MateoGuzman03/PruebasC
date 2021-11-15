#include <stdio.h>
#include <stdlib.h>

int main() {

    float pulgadas, cm;
    int pies;

    printf("Ingrese una cantidad de centimetros \n");
    scanf("%f", &cm);

    pulgadas = cm / 2.54;
    pies =  pulgadas / 12;

    printf("%f cm son %f pies o %f pulgadas", cm, pies, pulgadas);



    return 0;
}
