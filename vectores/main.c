#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {10,5,-1,11,4};
    int b[5] = {9,3,9,12,6};
int c[5];
int i;


    for(i=0; i<5; i++)
   {
       if (a[i]>b[i])
       {
           c[i]=a[i];
       }

       else
       {
           c[i]=b[i];
       }

printf("%d\n", c [i]);
   }

    return 0;
}
