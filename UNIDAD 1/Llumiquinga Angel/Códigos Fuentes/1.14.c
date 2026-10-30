#include <stdio.h>

int main()
{
    // Declaración de variables enteras
    int a, b, temp;

    // Entrada de datos
    printf("Ingrese a y b: ");
    scanf("%d %d", &a, &b);

    // Bucle Mientras (Algoritmo de Euclides)
    while (b != 0) {
        temp = b;        // Guardamos el valor actual de b
        b = a % b;       // Calculamos el residuo/módulo entre a y b
        a = temp;        // Actualizamos 'a' con el antiguo valor de 'b'
    }

    // Salida del Máximo Común Divisor
    printf("El MCD es: %d\n", a);

    return 0;
}
