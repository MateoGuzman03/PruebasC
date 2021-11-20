#include <stdio.h>
#include <stdlib.h>


int main() {

    int num, num2;

    printf("Ingrese un numero \n");
    scanf("%f", &num);

    num2 = num % 2;

    if(num2==0){
        printf("Este es un numero par");
    } else {
        printf("Este es un numero impar");
    }


    return 0;
}
