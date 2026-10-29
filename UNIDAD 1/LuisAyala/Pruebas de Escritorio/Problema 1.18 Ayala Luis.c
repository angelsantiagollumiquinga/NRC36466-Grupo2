//1.18 Triángulo de asteriscos
//Utiliza ciclos anidados para dibujar en la consola un triángulo rectángulo de 'n' filas.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int n, i = 1, j;

    printf("Ingrese el numero de filas (n >= 1): ");
    scanf("%d", &n);

    if (n >= 1) {

        while (i <= n) {
            j = 1;

            while (j <= i) {
                printf("*");
                j = j + 1;
            }

            printf("\n");
            i = i + 1;
        }
    } else {
        printf("Error: Ingrese un numero mayor o igual a 1.\n");
    }

    return 0;
}
