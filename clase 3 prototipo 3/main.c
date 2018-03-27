#include <stdio.h>
#include <stdlib.h>

//no toma ni devuelve ningun dato
void sumarNumeros(void);


int main()
{


sumarNumeros();




    return 0;
}


void sumarNumeros(void)
{

   int resultado;
   int numero1;
   int numero2;


   printf("ingrese un numero: ");
   scanf("%d", &numero1);

    printf("ingrese un numero: ");
   scanf("%d", &numero2);

resultado = numero1+ numero2;
printf("el resultado es: %d", resultado);
}
