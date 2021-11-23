#include <stdio.h>
#include <stdlib.h>

int main() {

  int vend, bole=1, imp1, imp2, imp3, impf1, impf2, impf3, comf1, comf2, comf3;

    comf1 = 0;
    comf2 = 0;
    comf3 = 0;

    impf1 = 0;
    impf2 = 0;
    impf3 = 0;


  while(bole==1){
        printf("\tIngrese numero de vendedor\n"); scanf("\t%i", &vend);
        if(vend==1){

            printf("\tIngrese un importe de boleta\n"); scanf("\t%i", &imp1);
            impf1 += imp1;
            comf1 +=imp1*5/100;;

        }
        else if(vend==2){
            printf("\tIngrese un importe de boleta\n"); scanf("\t%i", &imp2);
            impf2 += imp2;
            comf2 += imp2*5/100;

        }
        else if(vend==3){
            printf("\tIngrese un importe de boleta\n"); scanf("\t%i", &imp3);
            impf3 += imp3;
            comf3 += imp3*5/100;

        }
        else{
            printf("\tSolo hay 3 empleados\n");
        }
            printf("\tDesea ingresar otra boleta? Ingrese 1:SI 0:NO\n"); scanf("%i", &bole);
  }




    printf("\tVendedor"); printf("\t\t\tImporte"); printf("\t\t\t\tComision\n");

    printf("\t1"); printf("\t\t\t\t%i", impf1); printf("\t\t\t\t%i\n", comf1);
    printf("\t2"); printf("\t\t\t\t%i", impf2); printf("\t\t\t\t%i\n", comf2);
    printf("\t3"); printf("\t\t\t\t%i", impf3); printf("\t\t\t\t%i\n", comf3);



    return 0;
}
