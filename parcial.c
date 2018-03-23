#include <stdio.h>
#include <conio.h>

int main ()
{
int numero;
char respuesta;
int contpares=0;
int contimpares=0;
int contador=0;
int contneg=0;
int contpos=0;
int porcepos;
int porceneg;
int maximo;
int minimo;


while  (respuesta!='n')
  {
      printf("Ingrese un numero entero diferente de 0");
scanf("%d", &numero);

 if (numero<0)
    {
         contneg++ ;
}
else
        {
           contpos++;
}

if (numero %2 == 0 && numero!=0)
     {
            contpares++;
}
else
 {
     if (numero!=0)
            {
            contimpares++;
}
}
 if (numero<0)
    {
         contneg++;
}
else
        {
           contpos++;
}



contador++;
 printf("desea ingresar otro numero? s/n");
 fflush(stdin);
scanf("%c", &respuesta);
}
porceneg=contneg/contador;
porcepos=contpos/contador;


printf("la cantidad de numeros pares es %d\n", contpares);
printf("la cantidad de numeros impares es %d\n", contimpares);
printf("el porcentaje de numeros positivos es %d\n", porcepos);
printf("el porcentaje de numeros negativos es %d\n", porceneg);


}
