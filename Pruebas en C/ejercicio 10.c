#include <stdio.h>
#include <stdlib.h>

int main() {

    int num,resp;

    printf("Ingrese un numero para elejir un dia de la semana, tener en cuenta que 1 es Lunes \n");
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
    for (num = 1; num < 8; num++)
        {
        printf("Hoy es el dia: %i, desea seguir trabajndo? Responda con 1 para seguir trabajando y con 0 para irse\n", num);
        scanf("%i", &resp);
        if(resp == 1)
        {
            printf("Sigue trabajando\n");
        }
        else if(resp == 0)
        {
            printf("Deja de trabajar \n");
            break;
        }
    }



    return 0;
}
