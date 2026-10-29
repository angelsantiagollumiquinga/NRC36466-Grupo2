//1.13 Número capicúa
//Invierte el orden de los dígitos de un número para verificar si se lee igual de izquierda a derecha.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int num, original, invertido = 0, digito;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &num);

    if (num > 0) {
        original = num;

        while (num > 0) {
            digito = num % 10;
            invertido = (invertido * 10) + digito;
            num = num / 10;
        }

        if (original == invertido) {
            printf("El numero %d SI es capicua.\n", original);
        } else {
            printf("El numero %d NO es capicua.\n", original);
        }
    } else {
        printf("Error: Ingrese un numero positivo.\n");
    }

    return 0;
}
