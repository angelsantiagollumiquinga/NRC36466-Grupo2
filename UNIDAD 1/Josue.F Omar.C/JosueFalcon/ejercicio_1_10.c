#include <stdio.h>

int main() {
    int n;
    double factorial = 1;

    printf("Ingrese un numero entero >= 0: ");
    scanf("%d", &n);

    if (n >= 0) {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %.0f\n", n, factorial);
    } else {
        printf("Error: El numero debe ser mayor o igual a 0.\n");
    }

    return 0;
}
