#include <stdio.h>
#include <stdlib.h>

int main() {


   /* int cont = 1;
    printf("Multiplos de 2\t\t\t\t\tMultiplos de 3\n");
    while(cont<=100)
    {
        if(cont%2 == 0)
        {
            printf("%i", cont);
        }
        if(cont%3 == 0)
        {
            printf("\t\t\t\t\t\t%i", cont);
        }

        cont++;
        printf("\n");
    }*/

///////////////////////////////////////////////////////////////////////////////////

  /* int cont = 1;
   printf("Multiplos de 2\t\t\t\t\tMultiplos de 3\n");
    do
    {
        if(cont%2 == 0)
        {
            printf("%i", cont);
        }
        if(cont%3 == 0)
        {
            printf("\t\t\t\t\t\t%i", cont);
        }

        cont++;
        printf("\n");
    }
    while(cont<=100);*/

///////////////////////////////////////////////////////////////////////////////////

    printf("Multiplos de 2\t\t\t\t\tMultiplos de 3\n");

    for(int cont= 1; cont<=100; cont++){

        if(cont%2 == 0)
        {
            printf("%i", cont);
        }
        if(cont%3 == 0)
        {
            printf("\t\t\t\t\t\t%i", cont);
        }


        printf("\n");
    }



    return 0;
}
