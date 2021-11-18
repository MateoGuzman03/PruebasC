#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    printf("Ingrese un numero para elejir un dia de la semana, sabiendo que 1 es Lunes \n");
    scanf("%i", &num);

    switch(num) {
        case 1: printf("Hoy es Lunes");
            break;
        case 2: printf("Hoy es Martes");
            break;
        case 3: printf("Hoy es Miercoles");
            break;
        case 4: printf("Hoy es Jueves");
            break;
        case 5: printf("Hoy es Viernes");
            break;
        case 6: printf("Hoy es Sabado");
            break;
        case 7: printf("Hoy es Domingo");
            break;

    }



    return 0;
}
