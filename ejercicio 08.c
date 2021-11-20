#include <stdio.h>
#include <stdlib.h>

int main() {

    float celsius, fahrenheit;

    printf("Introduzca una cantidad de grados Celsius \n");
    scanf("%f", &celsius);

    fahrenheit= celsius *1.8 + 32;

    printf("%f grados Celsius son %f grados Fahrenheit", celsius, fahrenheit);



    return 0;
}
