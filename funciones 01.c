#include <stdio.h>
#include <stdlib.h>

int Sumar ();
int BuscarMaximo();
int BuscarMinimo();
float CalcularPromedio ();

void main() {

    int num1, num2, suma, max, min;
    float prom;

    printf("\tIngrese un numero\n"); scanf("%i", &num1);
    printf("\tIngrese otro numero\n"); scanf("%i", &num2);

    suma = Sumar(num1, num2);
    max = BuscarMaximo(num1, num2);
    min = BuscarMinimo(num1, num2);
    prom = CalcularPromedio(num1, num2);


    printf("\tSuma:%i\n\tMaximo:%i\n\tMinimo:%i\n\tPromedio:%f", suma, max, min, prom);

}

int Sumar (int num1, int num2){
    int total;
    total = num1 + num2;
    return total;
}

int BuscarMaximo(int num1, int num2){
    int maximo;
    if(num1>num2){
        maximo = num1;
    }
    else if(num1<num2){
        maximo = num2;
    }
    else{
        maximo = printf("\tSon iguales\n");
    }
    return maximo;
}

int BuscarMinimo(int num1, int num2){
    int minimo;
    if(num1>num2){
        minimo = num2;
    }
    else if(num1<num2){
        minimo = num1;
    }
    else{
        minimo = printf("\tSon iguales\n");
    }
    return minimo;
}

float CalcularPromedio(int num1, int num2){
    float prom;
    prom = (float)(num1+num2)/2;
    return prom;
}
