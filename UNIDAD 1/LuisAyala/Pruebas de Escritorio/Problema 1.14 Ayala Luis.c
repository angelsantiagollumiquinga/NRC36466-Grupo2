//1.14 Máximo común divisor
//Encuentra el MCD de dos números usando divisiones sucesivas hasta que el residuo sea cero.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Ingrese el primer numero positivo: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero positivo: ");
    scanf("%d", &b);

    if (a > 0 && b > 0) {
        while (b != 0) {
            resto = a % b;
            a = b;
            b = resto;
        }
        printf("El Maximo Comun Divisor (MCD) es: %d\n", a);
    } else {
        printf("Error: Ambos numeros deben ser positivos.\n");
    }

    return 0;
}
