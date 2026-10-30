#include <stdio.h>

int main() {
    float altura, suma = 0, maximo, minimo, media;
    int contador = 0;

    printf("Ingrese una altura (negativa para terminar): ");
    scanf("%f", &altura);

    if (altura >= 0) {
        maximo = altura;
        minimo = altura;

        while (altura >= 0) {
            suma += altura;
            contador++;

            if (altura > maximo) {
                maximo = altura;
            }
            if (altura < minimo) {
                minimo = altura;
            }

            printf("Ingrese otra altura (negativa para terminar): ");
            scanf("%f", &altura);
        }

        media = suma / contador;
        printf("Altura maxima: %.2f\n", maximo);
        printf("Altura minima: %.2f\n", minimo);
        printf("Media de alturas: %.2f\n", media);
    } else {
        printf("No se ingresaron alturas validas.\n");
    }

    return 0;
}
