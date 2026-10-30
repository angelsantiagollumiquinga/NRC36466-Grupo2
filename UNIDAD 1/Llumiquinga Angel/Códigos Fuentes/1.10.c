#include <stdio.h>

int main()
{
    // Declaración de variables enteras
    int n, i;
    long long factorial; // Usamos 'long long' porque los factoriales crecen muy rápido

    // Lectura de datos por teclado
    printf("Ingrese un numero entero mayor o igual a 0: ");
    scanf("%d", &n);

    // Validación inicial
    if (n < 0) {
        printf("Error: el numero debe ser mayor o igual a 0\n");
    } else {
        factorial = 1; // Inicialización de la identidad multiplicativa

        // Bucle Para (for) desde 1 hasta n
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        // Salida de datos (%lld para imprimir el tipo long long)
        printf("El factorial de %d es: %lld\n", n, factorial);
    }

    return 0;
}
