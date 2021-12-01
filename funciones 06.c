#include <stdio.h>
#include <stdlib.h>

char Menu();

void main() {
    char menu;
    menu = Menu();
    switch(menu){
        case 'A' : printf("\tOpcion A");
        break;
        case 'B' : printf("\tOpcion B");
        break;
        case 'C' : printf("\tOpcion C");
        break;
        default : printf("\tEleji bien pedazo de tarado");
    }
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
        default : printf("\tEleji bien pedazo de tarado");
    }
    return eleccion;

}
