#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, imp;
    num = 0;
    imp = 0;
    while(num<=100){
        if(num%2 == 1){
            printf("\t%i\n", num);
            imp++;
        }
            num++;
    }
    printf("\tNumeros impares: %i", imp);


    return 0;
}
