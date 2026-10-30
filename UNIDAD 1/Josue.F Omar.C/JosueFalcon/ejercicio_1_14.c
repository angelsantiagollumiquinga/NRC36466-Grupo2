#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Ingrese el primer numero (a): ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero (b): ");
    scanf("%d", &b);

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("El Maximo Comun Divisor es: %d\n", a);

    return 0;
}
