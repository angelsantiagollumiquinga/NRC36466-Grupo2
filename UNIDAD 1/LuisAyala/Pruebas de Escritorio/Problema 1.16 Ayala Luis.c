//1.16 Número perfecto
//Suma todos los divisores propios de un número para verificar si el resultado equivale al mismo número.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n > 0) {

        while (i < n) {
            if (n % i == 0) {
                suma = suma + i;
            }
            i = i + 1;
        }


        if (suma == n) {
            printf("El numero %d SI es perfecto.\n", n);
        } else {
            printf("El numero %d NO es perfecto.\n", n);
        }
    } else {
        printf("Error: Ingrese un numero mayor a 0.\n");
    }

    return 0;
}
