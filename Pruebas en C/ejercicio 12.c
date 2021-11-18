#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, par;
    num = 1;

    while(num<=100){
        par = num % 2;
        if(par==0){
            printf("\t%i\n", num);
        }
            num++;
    }



    return 0;
}
