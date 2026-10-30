#include <stdio.h>

int main()
{
    // Declaración de variables tipo entero
    int n, a, b, siguiente, i;

    // Lectura de datos por teclado
    printf("Ingrese n (>= 1): ");
    scanf("%d", &n);

    // Evaluación para imprimir el primer término
    if (n >= 1) {
        a = 0;
        printf("%d ", a);

        // Evaluación para imprimir el segundo término
        if (n >= 2) {
            b = 1;
            printf("%d ", b);

            // Bucle Para para generar a partir del tercer término en adelante
            for (i = 3; i <= n; i++) {
                siguiente = a + b;
                printf("%d ", siguiente);
                a = b;
                b = siguiente;
            }
        }
    }

    printf("\n");
    return 0;
}
