#include <stdio.h>
#include <stdlib.h>

int main() {

    /*int num, nat=1;
    printf("\tIngrese un numero\n"); scanf("%i", &num);

    while(nat<=num){
        printf("\t%i\n", nat);
        nat++;
    }*/

    /////////////////////////////////////////////////////////////////////

    /*int num, nat=1;
    printf("\tIngrese un numero\n"); scanf("%i", &num);

    do
    {
        printf("\t%i\n", nat);
        nat++;
    }
    while(nat<=num);*/

    ////////////////////////////////////////////////////////////////////

    int num;
    printf("\tIngrese un numero\n"); scanf("%i", &num);

    for(int nat = 1; nat<=num; nat++){
        printf("\t%i\n", nat);
    }


    return 0;
}
