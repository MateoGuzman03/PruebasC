#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, aux;

    num1 = 1;
    num2 = 2;

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("\tNum1: %i\n", num1);
    printf("\tNum2: %i\n", num2);






    return 0;
}
