#include <stdio.h>
#include <stdlib.h>

int main() {

     int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, suma, prod;
    suma = 0;
    prod = 1;

    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num1);

    while(num1!=0){

        if(num1<0){
            prod = prod*num1;
        }
        else if (num1>0){
            suma = suma + num1;
        }
        break;
    }

    if(num1==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num1);
    }
///////////////////////////////////////////////////////////////////////////////////////////////////
    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num2);

    while (num2!=0){
        if(num2<0){
            prod = prod*num2;
        }
        else if (num2>0){
            suma = suma + num2;
        }
        break;
    }
    if(num2==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num2);
    }
///////////////////////////////////////////////////////////////////////////////////////////////////
    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num3);

    while(num3!=0){
         if(num3<0){
            prod = prod*num3;
        }
        else if (num3>0){
            suma = suma + num3;
        }
        break;
    }
    if(num3==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num3);
    }
//////////////////////////////////////////////////////////////////////////////////////////////
    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num4);
    while(num4!=0){
        if(num4<0){
            prod = prod*num4;
        }
        else if (num4>0){
            suma = suma + num4;
        }
        break;
    }
    if(num4==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num4);
    }
//////////////////////////////////////////////////////////////////////////////////////////

    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num5);
    while(num5!=0){
        if(num5<0){
            prod = prod*num5;
        }
        else if (num5>0){
            suma = suma + num5;
        }
        break;
    }
     if(num5==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num5);
    }
/////////////////////////////////////////////////////////////////////////////////////////////

    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num6);
    while(num6!=0){
        if(num6<0){
            prod = prod*num6;
        }
        else if (num6>0){
            suma = suma + num6;
        }
        break;
    }
     if(num6==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num6);
    }
/////////////////////////////////////////////////////////////////////////////////////////////
    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num7);
    while(num7!=0){
        if(num7<0){
            prod = prod*num7;
        }
        else if (num7>0){
            suma = suma + num7;
        }
        break;
    }
     if(num7==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num7);
    }
/////////////////////////////////////////////////////////////////////////////////////////

    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num8);
    while(num8!=0){
        if(num8<0){
            prod = prod*num8;
        }
        else if (num8>0){
            suma = suma + num8;
        }
        break;
    }
     if(num8==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num8);
    }
//////////////////////////////////////////////////////////////////////////////////////////
    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num9);
    while(num9!=0){
        if(num9<0){
            prod = prod*num9;
        }
        else if (num9>0){
            suma = suma + num9;
        }
        break;
    }
     if(num9==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num9);
    }
/////////////////////////////////////////////////////////////////////////////////////////////
    printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num10);
    while(num10!=0){
        if(num10<0){
            prod = prod*num10;
        }
        else if (num10>0){
            suma = suma + num10;
        }
        break;
    }
     if(num10==0){
        printf("\tEl valor debe ser distinto a 0\n");
        printf("\tIngrese un numero distinto a 0\n"); scanf("%i", &num10);
    }




        printf("\t%i\n", suma);
        printf("\t%i\n", prod);





    return 0;
}
