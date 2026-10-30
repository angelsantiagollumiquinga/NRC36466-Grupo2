#include <stdio.h>

int main() {
    int n, suma = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }

    if (suma == n) {
        printf("%d es un numero perfecto.\n", n);
    } else {
        printf("%d NO es un numero perfecto.\n", n);
    }

    return 0;
}
