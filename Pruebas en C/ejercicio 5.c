#include <stdio.h>
#include <stdlib.h>

int main(){

    float base, altura, superficie;

    printf("Ingrese una base para el triangulo \n");
    scanf("%f", &base);
    printf("Ingrese una altura para el triangulo \n");
    scanf("%f", &altura);

    superficie = base * altura /2;
    printf("La superficie del triangulo es de: %f", superficie);


    return 0;
}
