#include <stdio.h>
#include <stdlib.h>

//1-prototipo o declaraciòn de la funcion(conocer que datos recibe y devuelve)
//que hace la funcion, que recibe y que devuelve
/** \brief permite sumar dos numeros enteros
 *
 * \param el primer numero a sumar
 * \param el segundo numero a sumar
 * \return la suma de los numeros
 *
 */

//el tipo de dato devuelto por la funcion(int, float, char, doble o void) y luego entre parentesis el tipo de parametros que recibe la funcion
int sumarNumeros(int, int);



int main()
{
    //3-la llamada a la funcion (invocar explicitamente a la funcion, hacer que se ejecute lo definido abajo)
   //creo las variables
   int resultado;
   int numero1 = 5;
   int numero2 = 9;

   //llamo a la funcion y completo entre parentesis con las variables a ejecutar dentro de la funcion
   resultado = sumarNumeros(numero1, numero2);




    printf("el resultado de la suma es: %d\n", resultado);
    return 0;
}


//2-desarrollo o implementacion de la funcion (cosigo de la funcion, el algoritmo que resyelve el problema)
//se desarrolla copiando el prototipo de 1 y se le saca el punto y coma, y se le agrega nombre a los parametros
int sumarNumeros(int primerNumero, int segundoNumero)
{
    //se declara una variable igual a la del dato a devolver
    int retorno;
    //se desarrolla la operacion en si
    retorno= primerNumero + segundoNumero;

    return retorno;
}
