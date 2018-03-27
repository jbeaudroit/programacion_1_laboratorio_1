#include <stdio.h>
#include <stdlib.h>
/** \brief pide un numero entero y lo valida
 *
 * \param texto del mensaje a mostrar
 * \param valor minimo del intervalo de validacion
 * \param valor maximo del intervalo de validacion
 * \return un numero entero validado
 *
 */

int pedirEntero(char[], int, int);

int validarEntero(int, int, int);

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
