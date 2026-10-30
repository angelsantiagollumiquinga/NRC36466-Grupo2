#include <stdio.h>

int main()
{
    int n, fila, col;

    printf("Ingrese n (>= 1): ");
    scanf("%d", &n);

    // Bucle externo para recorrer las filas
    for (fila = 1; fila <= n; fila++) {
        // Bucle interno para imprimir asteriscos por cada columna
        for (col = 1; col <= fila; col++) {
            printf("*");
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }

    return 0;
}
