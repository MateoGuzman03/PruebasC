#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    printf("Ingrese un numero para elejir un dia de la semana, sabiendo que 1 es Lunes \n");
    scanf("%i", &num);

    switch(num) {
        case 1: printf("Eligio el dia Lunes");
            break;
        case 2: printf("Eligio el dia Martes");
            break;
        case 3: printf("Eligio el dia Miercoles");
            break;
        case 4: printf("Eligio el dia Jueves");
            break;
        case 5: printf("Eligio el dia Viernes");
            break;
        case 6: printf("Eligio el dia Sabado");
            break;
        case 7: printf("Eligio el dia Domingo");
            break;


    }



    return 0;
}
