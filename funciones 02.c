#include <stdio.h>
#include <stdlib.h>

int Sumar();
int Restar();
int Multiplicar();
float Dividir();

void main(){

    int num1, num2, suma, resta, multi, op;
    float div;

    op = 1;

    while(op!=0){

        printf("\tIngrese un numero\n"); scanf("%i", &num1);
        printf("\tIngrese otro numero\n"); scanf("%i", &num2);

        suma = Sumar(num1, num2);
        resta = Restar(num1, num2);
        multi = Multiplicar(num1, num2);
        if(num2>0){
            div = Dividir(num1, num2);
        }


        printf("\tElija una operacion matematica: SUMA:1 RESTA:2 MULTIPLICACION:3 DIVISION:4\n"); scanf("%i", &op);

        if(op==1){
            printf("\tSuma = %i\n", suma);
        }
        else if(op==2){
            printf("\tResta = %i\n", resta);
        }
        else if(op==3){
            printf("\tMultiplicacion = %i\n", multi);
        }
       else if(op==4){
            if(num2==0){
               printf("\tNo se puede dividir por 0 SALAME\n\n");
            }
            else{
                printf("\tDivision = %i\n", div);
            }
        }

        printf("\tDesea salir? SI=0 NO=1\n"); scanf("%i", &op);
    }
}

int Sumar (int sumando1, int sumando2){
    int total;
    total = sumando1 + sumando2;
    return total;
}

int Restar (int minuendo, int sustraendo){
    int total;
    total = minuendo - sustraendo;
    return total;
}

int Multiplicar(int multiplicando, int multiplicador){
    int total;
    total = multiplicando * multiplicador;
    return total;
}

float Dividir(int dividendo, int divisor){
    float total;
    total = (float) dividendo / divisor;
    return total;
}
