#include <stdio.h>
#include <stdlib.h>

int IntercambioValores();

void main() {

    int num1, num2, inter;

    printf("\tIngrese un numero\n"); scanf("%i", &num1);
    printf("\tIngrese otro numero\n"); scanf("%i", &num2);

    inter = IntercambioValores(num1, num2);

}

int IntercambioValores(int num1, int num2){
    int num, inter;
    num = num1;
    num1 = num2;
    num2 = num;
    inter = printf("\t %i %i", num1, num2);

    return inter;

}
