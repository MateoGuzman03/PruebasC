#include <stdio.h>
#include <stdlib.h>

int main (){

    float num;

    printf("Ingresa un numero \n");
    scanf("%f", &num);

    if(num>0){
        printf("El numero que introdujo es positivo");
    } else {
        printf("El numero que introdujo es negativo");
    }



    return 0;
}
