#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, imp;
    i = 0;
    while(i<=100){
        imp = i % 2;
        if(imp == 1){
            printf("\t%i\n", i);
        }
            i++;
    }



    return 0;
}
