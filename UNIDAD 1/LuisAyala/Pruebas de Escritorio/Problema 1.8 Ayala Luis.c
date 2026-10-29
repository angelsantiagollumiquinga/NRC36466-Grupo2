//1.8 Número primo
//Determina si un número ingresado mayor a 1 solo es divisible para 1 y para sí mismo.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int num, i = 2, esPrimo = 1;

    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &num);

    if (num > 1) {
        while (i * i <= num && esPrimo == 1) {
            if (num % i == 0) {
                esPrimo = 0;
            } else {
                i = i + 1;
            }
        }

        if (esPrimo == 1) {
            printf("El %d SI es primo.\n", num);
        } else {
            printf("El %d NO es primo.\n", num);
        }
    } else {
        printf("El numero debe ser mayor que 1.\n");
    }

    return 0;
}
