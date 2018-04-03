#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/** \brief pide un numero entero y lo valida
 *
 * \param texto del mensaje a mostrar
 * \param valor minimo del intervalo de validacion
 * \param valor maximo del intervalo de validacion
 * \return un numero entero validado
 *
 */


int main()
{
    int edad;
    int legajo;


    edad = pedirEntero("ingrese edad", 1, 60);
     legajo = pedirEntero("ingrese legajo", 1, 1500);
    printf("la edad ingresado es %d\n", edad);
    printf("el legajo ingresado es %d\n", legajo);
    return 0;
}


