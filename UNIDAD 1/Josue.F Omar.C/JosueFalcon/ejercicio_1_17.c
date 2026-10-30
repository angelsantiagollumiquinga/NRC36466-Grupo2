#include <stdio.h>

int main() {
    int n, binario[32], i = 0;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("El equivalente binario es: 0\n");
        return 0;
    }

    while (n > 0) {
        binario[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("El equivalente binario es: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
