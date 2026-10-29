//1.12 Suma de dígitos
//Extrae uno a uno los dígitos de un número entero mediante divisiones sucesivas y los suma.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int num, suma = 0, digito;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    if (num > 0) {
        while (num > 0) {
            digito = num % 10;
            suma = suma + digito;
            num = num / 10;
        }
        printf("La suma de los digitos es: %d\n", suma);
    } else {
        printf("Error: Ingrese un numero positivo.\n");
    }

    return 0;
}
