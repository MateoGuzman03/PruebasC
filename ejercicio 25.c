#include <stdio.h>
#include <stdlib.h>

int main() {

 int vend, bole=1, imp, impf1, impf2, impf3;

    impf1 = 0;
    impf2 = 0;
    impf3 = 0;

  while(bole==1){
        printf("\tIngrese numero de vendedor\n"); scanf("\t%i", &vend);
        if(vend==1){

            printf("\tIngrese un importe de boleta\n"); scanf("\t%i", &imp);
            impf1 += imp;

        }
        else if(vend==2){
            printf("\tIngrese un importe de boleta\n"); scanf("\t%i", &imp);
            impf2 += imp;

        }
        else if(vend==3){
            printf("\tIngrese un importe de boleta\n"); scanf("\t%i", &imp);
            impf3 += imp;

        }
        else{
            printf("\tSolo hay 3 empleados\n");
        }
            printf("\tDesea ingresar otra boleta? Ingrese 1:SI 0:NO\n"); scanf("%i", &bole);
  }

    printf("\tVendedor"); printf("\t\t\tImporte"); printf("\t\t\t\tComision\n");

    printf("\t1"); printf("\t\t\t\t%i", impf1); printf("\t\t\t\t%i\n", impf1*5/100);
    printf("\t2"); printf("\t\t\t\t%i", impf2); printf("\t\t\t\t%i\n", impf2*5/100);
    printf("\t3"); printf("\t\t\t\t%i", impf3); printf("\t\t\t\t%i\n", impf3*5/100);

    return 0;
}
