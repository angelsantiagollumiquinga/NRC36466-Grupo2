#include <stdio.h>

int main() {
    int n, divisores = 0;

    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("%d es un numero primo.\n", n);
    } else {
        printf("%d NO es un numero primo.\n", n);
    }

    return 0;
}
