#include <stdio.h>
#include <stdlib.h>

int main() {

    int hsm, vhs, ant, impb, impn, valm, desc ;

    printf("\tIngrese la cantidad de horas trabajadas este mes\n"); scanf("%i", &hsm);

    vhs = 5;

    printf("\tIngrese la cantidad de años trabajados en la empresa\n"); scanf("%i", &ant);


    valm = hsm * vhs;
    //printf("%i", valm);

    impb = valm + (ant*300);

    impn = impb - (impb*0.13);
    desc = impb*0.13;


    //printf("%i", impn);

    printf("\tAntiguedad"); printf("\t\tValor hora"); printf("\t\tBruto"); printf("\t\tDescuento"); printf("\t\tNeto\n");

    printf("\t%i", ant); printf("\t\t\t%i", vhs); printf("\t\t\t%i", impb); printf("\t\t%i", desc); printf("\t\t\t%i", impn);





    return 0;
}
