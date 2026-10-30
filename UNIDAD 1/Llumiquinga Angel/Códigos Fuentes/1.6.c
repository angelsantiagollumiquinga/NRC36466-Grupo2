#include <stdio.h>

int main()
{
    // Declaración de variables
    float altura, suma = 0.0, maximo, minimo, media;
    int contador = 0;

    // Entrada del primer valor
    printf("Ingrese una altura (o un negativo para terminar): ");
    scanf("%f", &altura);

    // Verificación inicial si el primer número es válido
    if (altura >= 0) {
        maximo = altura;
        minimo = altura;

        // Bucle para procesar alturas hasta ingresar un número negativo
        while (altura >= 0) {
            suma = suma + altura;
            contador = contador + 1;

            // Actualización del valor máximo
            if (altura > maximo) {
                maximo = altura;
            }

            // Actualización del valor mínimo
            if (altura < minimo) {
                minimo = altura;
            }

            printf("Ingrese otra altura (o negativo para terminar): ");
            scanf("%f", &altura);
        }

        // Cálculo y despliegue de resultados si se ingresó al menos un dato válido
        if (contador > 0) {
            media = suma / contador;
            printf("\n--- RESULTADOS ---\n");
            printf("Media de alturas: %.2f\n", media);
            printf("Altura maxima: %.2f\n", maximo);
            printf("Altura minima: %.2f\n", minimo);
        }
    } else {
        printf("No se ingresaron alturas validas.\n");
    }

    return 0;
}
