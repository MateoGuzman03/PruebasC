#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    char resp;

    printf("Ingrese un numero para elejir un dia de la semana, sabiendo que 1 es Lunes \n");
    scanf("%i", &num);

    switch(num) {
        case 1: printf("Eligio el dia Lunes \n");
            break;
        case 2: printf("Eligio el dia Martes \n");
            break;
        case 3: printf("Eligio el dia Miercoles \n");
            break;
        case 4: printf("Eligio el dia Jueves \n");
            break;
        case 5: printf("Eligio el dia Viernes \n");
            break;
        case 6: printf("Eligio el dia Sabado \n");
            break;
        case 7: printf("Eligio el dia Domingo \n");
            break;

        default: printf("El numero que elijio no equivale a ningun dia de la semana");
    }

    printf("Quiere seguir trabajando? Ingrese S en caso de querer seguir trabajando, y N en caso de que no \n");
    scanf("%c", &resp);

    switch(resp){
        case 'S': printf("Seguire trabajando");
        case 'N': printf("No seguire trabando");
    }

    }



    return 0;
}
