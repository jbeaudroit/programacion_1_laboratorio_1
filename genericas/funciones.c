#include <stdio.h>
#include "funciones.h"

int pedirEntero(char mensaje[], int min, int max)
{
 int numero;

 printf("%s", mensaje);
 scanf("%d", &numero);

numero=validarEntero(numero, min, max);

 return numero;
}

int validarEntero(int dato, int min, int max)
{
    while(!(dato>min && dato < max))
   {
           printf("ERROR: Ingrese entre %d y %d", min, max);
 scanf("%d", &dato);
 }
}

