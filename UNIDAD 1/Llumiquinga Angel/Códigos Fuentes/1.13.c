#include <stdio.h>

int main()
{
    // Declaración de variables tipo entero
    int n, original, aux, invertido;

    // Entrada de datos
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    // Guardamos copias del número original para comparar al final
    original = n;
    aux = n;
    invertido = 0;

    // Bucle Mientras para construir el número invertido dígito a dígito
    while (aux > 0) {
        invertido = (invertido * 10) + (aux % 10);
        aux = aux / 10; // La división de enteros en C descarta automáticamente los decimales
    }

    // Comprobación de capicúa
    if (original == invertido) {
        printf("%d es capicua.\n", n);
    } else {
        printf("%d No es capicua.\n", n);
    }

    return 0;
}
