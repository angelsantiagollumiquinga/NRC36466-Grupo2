#include <stdio.h>

int main()
{
    // Declaración de variables enteras
    int a, b, inicio, fin, num, i;
    int esPrimo; // 1 = Verdadero, 0 = Falso

    // Lectura de los límites
    printf("Ingrese el primer numero limite (a): ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero limite (b): ");
    scanf("%d", &b);

    // Ordenamiento automático del rango (de menor a mayor)
    if (a <= b) {
        inicio = a;
        fin = b;
    } else {
        inicio = b;
        fin = a;
    }

    printf("\nLos numeros primos comprendidos entre %d y %d son:\n", inicio, fin);

    // Bucle para recorrer cada número dentro del rango [inicio, fin]
    for (num = inicio; num <= fin; num++) {
        // Los números primos deben ser estrictamente mayores a 1
        if (num > 1) {
            esPrimo = 1; // Asumimos inicialmente que es primo
            i = 2;

            // Bucle Mientras para buscar divisores exactos
            while (i < num && esPrimo == 1) {
                if (num % i == 0) {
                    esPrimo = 0; // Se encontró un divisor -> No es primo
                }
                i = i + 1;
            }

            // Si al salir del bucle sigue siendo primo, lo mostramos
            if (esPrimo == 1) {
                printf("%d ", num);
            }
        }
    }

    printf("\n");
    return 0;
}
