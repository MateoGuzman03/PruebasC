#include <stdio.h>
#include <stdlib.h>

float SALARIO();

void main() {

    int hora, valh=5;

    printf("\tIngrese cuantas horas trabajo esta semana\n"); scanf("%i", &hora);

    printf("\t%f",SALARIO(hora, valh));

}

float SALARIO(int hora, int valh){

    float hextra= 40, valextra, sal;
    valextra = valh*1.5;

    if(hora>40){
        for(int i = 40; i<hora; i++){
            hextra++;
        }
        hextra*=valextra;
        sal = hextra;
    }
    else{
        if(hora<=40){
            hora*=valh;
            sal = hora;
        }
    }
            return sal;

}
