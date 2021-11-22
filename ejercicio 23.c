#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, cuad, cub, num = 1;

    printf("\tIngrese un numero\n"); scanf("%i", &n);

    printf("Numero");

    printf("\t\t\t\tCuadrado");

    printf("\t\t\tCubo\n");


    while(num<=n){

        cuad= num*num;
        cub= num*num*num;

        printf("%i\n", num);

        printf("\t\t\t\t%i\n", cuad);

        printf("\t\t\t\t\t\t\t\t%i\n", cub);
        num++;
    }




    return 0;
}
