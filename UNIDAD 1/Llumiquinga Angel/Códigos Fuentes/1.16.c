#include <stdio.h>

int main()
{
    // Declaración de variables de tipo entero
    int n, suma, d;

    // Lectura del número por teclado
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    // Inicialización del acumulador
    suma = 0;

    // Bucle para buscar divisores propios desde 1 hasta n - 1
    for (d = 1; d <= n - 1; d++) {
        // En C, el operador módulo (MOD) es el símbolo de porcentaje %
        if (n % d == 0) {
            suma = suma + d; // Acumulamos el divisor hallado
        }
    }

    // Verificación final si la suma de divisores es igual al número original
    if (suma == n) {
        printf("%d es un numero perfecto.\n", n);
    } else {
        printf("%d No es un numero perfecto.\n", n);
    }

    return 0;
}
