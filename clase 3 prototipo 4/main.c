#include <stdio.h>
#include <stdlib.h>
int sumarNumeros(void);


int main()
{

int resultado;

resultado=sumarNumeros();

printf("\nEl resultado de la suma es %d\n", resultado);



    return 0;
}


int sumarNumeros(void)
{

   int resultado;
   int numero1;
   int numero2;


   printf("ingrese un numero: ");
   scanf("%d", &numero1);

    printf("ingrese un numero: ");
   scanf("%d", &numero2);

resultado = numero1+ numero2;
return resultado;
}
