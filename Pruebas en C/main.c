#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, n5;
    printf("Introduzca un numero: \n");
    scanf("%f", &n1);
    printf("Introduzca un numero: \n");
    scanf("%f", &n2);
    printf("Introduzca un numero: \n");
    scanf("%f", &n3);
    printf("Introduzca un numero: \n");
    scanf("%f", &n4);
    printf("Introduzca un numero: \n");
    scanf("%f", &n5);

    float resultado;
    resultado = (n1+n2+n3+n4+n5) / 5;

    printf("La media es: %f ", resultado);

    return 0;
}
