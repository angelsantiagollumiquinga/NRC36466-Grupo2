//1.19 Segundo mayor de una secuencia
//Lee números hasta ingresar cero, comparando y actualizando el primer y segundo valor más alto.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int num, mayor1 = 0, mayor2 = 0, cant = 0;

    printf("Ingrese un numero positivo (0 para terminar): ");
    scanf("%d", &num);

    while (num != 0) {
        if (num > 0) {
            cant = cant + 1;

            if (num > mayor1) {

                mayor2 = mayor1;
                mayor1 = num;
            } else {

                if (num > mayor2 && num != mayor1) {
                    mayor2 = num;
                }
            }
        }

        printf("Ingrese otro numero (0 para terminar): ");
        scanf("%d", &num);
    }


    if (cant < 2) {
        printf("\nError: Hay menos de dos valores.\n");
    } else {
        printf("\nEl mayor es: %d\n", mayor1);
        printf("El segundo mayor es: %d\n", mayor2);
    }

    return 0;
}
