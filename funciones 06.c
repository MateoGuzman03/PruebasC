#include <stdio.h>
#include <stdlib.h>

char Menu();

void main() {
    printf("\t%c", Menu());
}

char Menu(){
    char eleccion, opcion;
    printf("\tElija una opcion\n");
    printf("\tOpcion A\n\tOpcion B\n\tOpcion C\n");
    scanf("%c",&opcion);
    switch(opcion){
        case 'a' : eleccion = 'A';
        break;
        case 'A' : eleccion = 'A';
        break;
        case 'b' : eleccion = 'B';
        break;
        case 'B' : eleccion = 'B';
        break;
        case 'c' : eleccion = 'C';
        break;
        case 'C' : eleccion = 'C';
        break;
        default : eleccion = printf("\tElegi bien pedazo de tarado");
    }
    return eleccion;

}
