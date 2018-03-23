#include <stdio.h>
#include <conio.h>

int main ()
{
    int porcentajeAumento;
    float sueldo;
    char nombre;
    float aumentoSueldo;
    float sueldoFinal;

    printf("Ingrese un porcentaje de aumento");
scanf("%d", &porcentajeAumento);
printf("Ingrese el sueldo");
scanf("%f", &sueldo);
printf("Ingrese el nombre");
fflush(stdin);
scanf("%c", &nombre);

aumentoSueldo=(((float)porcentajeAumento/100)*sueldo);
sueldoFinal= aumentoSueldo+sueldo;

printf("el nombre es %c, el sueldo es %f, el aumento de sueldo es %f, el sueldo con aumento es %f y el porcentaje de aumento es %d%%", nombre, sueldo, aumentoSueldo, sueldoFinal, porcentajeAumento);





}
