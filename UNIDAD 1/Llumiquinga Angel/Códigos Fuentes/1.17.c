#include <stdio.h>

int main()
{
    // Declaración de variables tipo entero
    int n, resto;
    int binario[32]; // Arreglo para almacenar los dígitos binarios (hasta 32 bits)
    int i = 0;

    // Entrada de datos por teclado
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    // Caso especial para el número 0
    if (n == 0) {
        printf("En binario es: 0\n");
    } else {
        // Bucle Mientras: extraer residuos de divisiones sucesivas entre 2
        while (n > 0) {
            resto = n % 2;          // Operador módulo en C (%)
            binario[i] = resto;     // Guardamos el residuo en el arreglo
            i++;
            n = n / 2;              // División entera que trunca los decimales
        }

        // Imprimir el resultado invirtiendo el orden de los residuos guardados
        printf("En binario es: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binario[j]);
        }
        printf("\n");
    }

    return 0;
}
