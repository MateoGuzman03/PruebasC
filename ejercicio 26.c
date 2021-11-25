#include <stdio.h>
#include <stdlib.h>

int main() {

    int lad1, lad2, lad3, sum1y2, sum2y3, sum1y3;

    printf("\tIngrese un largo para el lado 1 del triangulo\n"); scanf("\%i", &lad1);

    printf("\tIngrese un largo para el lado 2 del triangulo\n"); scanf("\%i", &lad2);

    printf("\tIngrese un largo para el lado 3 del triangulo\n"); scanf("\%i", &lad3);

    sum1y2 = lad1 + lad2;
    sum2y3 = lad2 + lad3;
    sum1y3 = lad1 + lad3;

    //Equilatero : 3 lados iguales
    //Isosceles : 2 lados iguales
    //Escaleno : lados diferentes

    if(lad1==lad2){
        if(lad2==lad3){
            printf("\tEste es un triangulo Equilatero\n");
        }else if(sum1y2>lad3){
            printf("\tEste es un triangulo Isosceles\n");
        }
        else{
            printf("\tNo se puede formar un triangulo\n");
        }
    }

    else if(lad2==lad3){
         //printf("\tEste es un triangulo Isosceles\n");
         if(sum2y3>lad1){
            printf("\tEste es un triangulo Isosceles\n");
         }
         else{
            printf("\tNo se puede formar un triangulo\n");
         }
    }
    else if(lad1==lad3){
        if(sum1y3>lad2){
            printf("\tEste es un triangulo Isosceles\n");
        }
    }
    /*else if(sum1y2>lad3){
            printf("\tEste es un triangulo Isosceles\n");
        }
    else if(sum2y3>lad1){
            printf("\tEste es un triangulo Isosceles\n");
         }
    else if(sum1y3>lad2){
        printf("\tEste es un triangulo Isosceles\n");
    }*/
    else if(lad1!=lad2){
        if(lad1!=lad3){
            if(sum1y2>lad3){
                printf("\tEste es un triangulo Escaleno\n");
            }
            else if(sum2y3>lad1){
                printf("\tEste es un triangulo Escaleno\n");
            }
            else if(sum1y3>lad2){
                printf("\tEste es un triangulo Escaleno\n");
            }
            else {
                printf("\tNo se puede formar un triangulo\n");
            }
        }
    }






    return 0;
}
