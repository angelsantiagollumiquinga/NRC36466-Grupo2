//1.6 Máximo, mínimo y media de alturas
//Lee estaturas hasta ingresar un negativo y calcula la más alta, la más baja y el promedio.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    float altura, suma = 0.0, max, min, media;
    int cant = 0;

    printf("Ingrese una altura (negativo para salir): ");
    scanf("%f", &altura);

    if (altura >= 0) {
        max = altura;
        min = altura;
    }

    while (altura >= 0) {
        suma = suma + altura;
        cant = cant + 1;

        if (altura > max) {
            max = altura;
        }
        if (altura < min) {
            min = altura;
        }

        printf("Ingrese una altura (negativo para salir): ");
        scanf("%f", &altura);
    }

    if (cant > 0) {
        media = suma / cant;
        printf("\nMedia de alturas: %.2f\n", media);
        printf("Altura maxima: %.2f\n", max);
        printf("Altura minima: %.2f\n", min);
    } else {
        printf("\nNo se ingresaron alturas validas.\n");
    }

    return 0;
}
