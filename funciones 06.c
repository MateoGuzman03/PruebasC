#include <stdio.h>
#include <stdlib.h>

char Menu();

void main() {

   Menu();


}

char Menu(){

    char opcion;

    printf("\tElija una opcion\n");
    printf("\tOpcion A\n\tOpcion B\n\tOpcion C\n");

    scanf("%c",&opcion);

    switch(opcion){
        case 'a' : printf("\tOpcion A");
        break;
        case 'A' : printf("\tOpcion A");
        break;
        case 'b' : printf("\tOpcion B");
        break;
        case 'B' : printf("\tOpcion B");
        break;
        case 'c' : printf("\tOpcion C");
        break;
        case 'C' : printf("\tOpcion C");
        break;
        default : printf("\tEleji bien pedazo de tarado");
    }

    return opcion;

}
