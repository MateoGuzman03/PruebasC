#include <stdio.h>
#include <stdlib.h>

int ElevarPotencia();

void main() {

    int x, y, potencia;

    printf("\tIngrese un numero\n"); scanf("%i", &x);

    printf("\tIngrese una potencia para ese numero\n"); scanf("%i", &y);

    potencia = ElevarPotencia(x, y);

}

int ElevarPotencia(int x, int y){
    int result, pot=x;

    for(int i=1; i<=y ; i++){
        x*=pot;
        result = x;
    }
    printf("%i", result);
    return result;
}
