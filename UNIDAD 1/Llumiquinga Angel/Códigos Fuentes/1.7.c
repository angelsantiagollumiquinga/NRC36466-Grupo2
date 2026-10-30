#include <stdio.h>

int main()
{
    // Declaración de variables enteras
    int N, i, R;

    // Lectura de datos por teclado
    printf("Ingrese un numero entero positivo N: ");
    scanf("%d", &N);

    // Validación inicial
    if (N <= 0) {
        printf("El numero debe ser un entero positivo mayor que cero.\n");
    } else {
        i = 1;

        // Bucle para buscar la raíz entera mediante multiplicaciones
        while (i * i <= N) {
            i = i + 1;
        }

        // Como 'i' se pasa por una unidad al romper el bucle, restamos 1
        R = i - 1;

        // Salida de datos
        printf("La raiz cuadrada entera por defecto de %d es: %d\n", N, R);
    }

    return 0;
}
