#include <stdio.h>
#include <conio.h>

int main()
{
int numero;
float numero2;
float suma;
char letra;

 printf("ingrese un numero entero");
scanf("%d", &numero);
 printf("ingrese un numero flotante");
scanf("%f", &numero2);

printf("ingrese una letra");
fflush(stdin);
/*    scanf(" %c", &letra);
*/
letra = getchar();
suma = numero + numero2;

printf("\nel numero es: %d y el numero flotante es %.2f\n", numero, numero2);
    printf("la suma de ambos numeros es %.2f\n", suma);
        printf("la letra ingresada es %c\n", letra);

        system("\npause");
    return 0;
}
