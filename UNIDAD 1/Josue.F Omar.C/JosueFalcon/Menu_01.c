#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int op, n, fil;
    float res = 0, i;

    do
    {
        printf("MENU\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                do
                {
                    printf("Ingrese numero de filas: ");
                    scanf("%d", &fil);
                } while (fil <= 0);

                for (int i = 0; i < fil; i++)
                {
                    for (int j = 0; j < 2 * fil - 1; j++)
                    {
                        // Tu lógica para la figura
                    }
                }
                break; // Importante para cerrar el caso 1

            case 2:
                // Lógica para la opción 2
                break;

            case 3:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }
    } while (op != 3);

    return 0;
}
