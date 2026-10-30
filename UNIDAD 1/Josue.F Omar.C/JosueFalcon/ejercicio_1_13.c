#include <stdio.h>

int main() {
    int n, original, invertido = 0, digito;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    original = n;
    while (n > 0) {
        digito = n % 10;
        invertido = (invertido * 10) + digito;
        n /= 10;
    }

    if (original == invertido) {
        printf("Es capicua\n");
    } else {
        printf("No es capicua\n");
    }

    return 0;
}
