#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numeroX;
    int numeroY;
    int suma;
    int resta;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

printf("ingrese el numero de opción que desea realizar %d\n", opcion);
 scanf("%d",&opcion);
while (opcion<1 || opcion>9)
{
    printf("las opciones posibles van del 1 al 9, reingrese la opción que desea realizar: %d\n", opcion);

        scanf("%d",&opcion);
}

fflush(stdin);
        switch(opcion)
        {
            case 1:
                printf("ingrese el primer operando %d\n", numeroX);
               scanf("%d", &numeroX);
                break;
            case 2:
                printf("ingrese el segundo operando %d\n", numeroY);
                scanf("%d", &numeroY)
                break;
            case 3:

                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }


    return 0;
}
