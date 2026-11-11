//Triangulo normal, Grupo 2


#include <stdio.h>

void main()
{
    /*
        *
        * *
        * * *
        * * * *
    */
    int i,j,n;
    do
    {
        printf ("Lineas del triangulo:");
        scanf("%d",&n);
    } while (n<=0);
    for(i=1;i<=n;i++) //filas
    {
        for(j=1;j<=i;j++) //columnas
            printf("* ");
        printf("\n");

    }
}
