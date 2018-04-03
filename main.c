#include <stdio.h>
#include <stdlib.h>



int main()
{

int numero;
int acumulador=1;
int i;

 printf("ingrese el numero sobre el que quiere calcular el factorial");
 scanf("%d", &numero);

   for (i=numero;i>=1;i--)
    {
   acumulador=acumulador*i;

   }

    printf("el factorial es %d", acumulador);
return 0;





/*
int factorial(int numero)
{
int retorno;
if(numero==0)
{
    retorno=1;
}
else
    {
retorno=numerofactorial(numero-1);
}

        return retorno;
*/
}
