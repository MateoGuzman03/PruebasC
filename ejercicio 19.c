#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, multi=1;
    printf("\tIngrese un numero\n"); scanf("%i", &num);


    while(multi<=num){
        if(multi%3 == 0)
        {
        printf("\t%i\n",multi);
        }
        multi++;

    }







    return 0;
}
