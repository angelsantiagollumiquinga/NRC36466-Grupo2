#include <stdio.h>

int main()
{
    // Declaración de variables de tipo decimal (Real -> float)
    float n1, n2, prom;

    // Lectura del primer número
    printf("Ingrese el primer numero: ");
    scanf("%f", &n1);

    // Lectura del segundo número
    printf("Ingrese el segundo numero: ");
    scanf("%f", &n2);

    // Proceso: Cálculo del promedio
    prom = (n1 + n2) / 2.0;

    // Salida: Mostrar el resultado final
    printf("El promedio es: %.2f\n", prom);

    return 0;
}
