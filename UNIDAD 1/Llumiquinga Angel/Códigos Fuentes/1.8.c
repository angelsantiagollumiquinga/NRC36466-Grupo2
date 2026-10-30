#include <stdio.h>

int main()
{
    // Declaración de variables tipo entero
    int n, i;
    int primo;

    // Lectura de datos por teclado
    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &n);

    // Validación inicial
    if (n <= 1) {
        printf("El numero debe ser mayor que 1\n");
    } else {
        primo = 1; // 1 equivale a Verdadero
        i = 2;

        // Bucle Mientras: evalúa i < n Y QUE el número siga siendo considerado primo
        while (i < n && primo == 1) {
            if (n % i == 0) { // El operador % calcula el resto o módulo
                primo = 0;   // Se encontró un divisor, por lo tanto NO es primo (Falso)
            } else {
                i = i + 1;
            }
        }

        // Evaluación final de la bandera
        if (primo == 1) {
            printf("El numero es primo\n");
        } else {
            printf("El numero no es primo\n");
        }
    }

    return 0;
}
