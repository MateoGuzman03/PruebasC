#include <stdio.h>
#include <stdlib.h>

int IntercambioValores1();
int IntercambioValores2();

void main() {

    int num1, num2;

    printf("\tIngrese un numero\n"); scanf("%i", &num1);
    printf("\tIngrese otro numero\n"); scanf("%i", &num2);

    printf("\t%i",IntercambioValores1(num1, num2));
    printf("\t%i",IntercambioValores2(num1, num2));

}

int IntercambioValores1(int num1, int num2){
    num1 = num2;
    return num1;
}

int IntercambioValores2(int num1, int num2){
    num2 = num1;
    return num2;
}

