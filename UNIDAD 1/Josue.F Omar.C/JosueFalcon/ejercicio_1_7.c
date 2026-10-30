#include <stdio.h>

int main() {
    int N, r = 0;

    printf("Ingrese un numero entero positivo N: ");
    scanf("%d", &N);

    while ((r + 1) * (r + 1) <= N) {
        r++;
    }

    printf("La raiz cuadrada entera por defecto es: %d\n", r);

    return 0;
}
