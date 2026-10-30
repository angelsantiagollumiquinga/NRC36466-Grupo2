#include <stdio.h>

int main() {
    int n, suma = 0, digito;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    while (n > 0) {
        digito = n % 10;
        suma += digito;
        n /= 10;
    }

    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}
