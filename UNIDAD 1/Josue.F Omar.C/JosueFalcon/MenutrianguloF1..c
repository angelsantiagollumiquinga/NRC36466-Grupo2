#include <stdio.h>
#include <stdlib.h>

void dibujarTriangulo() {
    int filas, i, j;
    do {
        printf("Ingrese numero de filas: ");
        scanf("%d", &filas);
    } while (filas <= 0);

    for (i = 0; i < filas; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == filas - 1) {
                printf("1 ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void calcularSerie() {
    int terminos, k;
    float suma = 0.0;
    do {
        printf("Ingrese el limite de la serie: ");
        scanf("%d", &terminos);
    } while (terminos <= 0);

    for (k = 1; k <= terminos; k++) {
        suma += 1.0 / k;
        printf("1/%d", k);
        if (k < terminos) {
            printf(" + ");
        }
    }
    printf(" = %.4f\n", suma);
}

int main() {
    int opcion = 0;

    while (opcion != 3) {
        printf("\nMENU\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            dibujarTriangulo();
        } else if (opcion == 2) {
            calcularSerie();
        } else if (opcion == 3) {
            printf("Saliendo...\n");
        } else {
            printf("Opcion invalida.\n");
        }
    }

    return 0;
}
