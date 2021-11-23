#include <stdio.h>
#include <stdlib.h>

int main() {

    int peso, men, may, igual, resp;

      men = 0;
      may = 0;
      igual = 0;
      resp = 1;

      do
      {
          printf("\tCuanto pesa?\n"); scanf("\%i", &peso);

          if(peso<80){
            men++;
          }
          else if(peso==80){
            igual++;
          }
          else if(peso>80){
            may++;
          }
          printf("\tDesea ingresar otro empleado? responda Si:1, No:0\n"); scanf("%i", &resp);

      }
      while(resp==1);

        printf("\tCantidad de empleados que pesan menos de 80kg: %i\n", men);
        printf("\tCantidad de empleados que pesan 80kg: %i\n", igual);
        printf("\tCantidad de empleados que pesan mas de 80kg: %i\n", may);


    return 0;
}
