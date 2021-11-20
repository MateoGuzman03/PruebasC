#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {

    float num,cuad;

    printf("Ingrese un numero \n");
    scanf("%f", &num);

    if(num>0){
        cuad= num * num ;
        printf("El cuadrado del %f es %f", num, cuad);
    } else {
        printf("ERROR, el número debe ser mayor que cero");
    }

    return 0;
}
