#include <stdio.h>
#include <stdlib.h>

int ElevarPotencia();

void main() {

    int x, y;

    printf("\tIngrese un numero\n"); scanf("%i", &x);

    printf("\tIngrese una potencia para ese numero\n"); scanf("%i", &y);

    printf("\t%i",ElevarPotencia(x, y) );

}

int ElevarPotencia(int x, int y){
    int pot=x;
    for(int i=1; i<=y ; i++){
        x*=pot;
    }
    return x;
}
