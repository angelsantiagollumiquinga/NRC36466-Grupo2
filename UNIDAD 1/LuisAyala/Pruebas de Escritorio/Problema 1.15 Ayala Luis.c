//1.15 Año bisiesto
//Evalúa mediante operadores lógicos si un año es múltiplo de 4, manejando las excepciones de los siglos.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int anio;

    printf("Ingrese un anio para evaluar: ");
    scanf("%d", &anio);

    if (anio > 0) {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            printf("El anio %d SI es bisiesto.\n", anio);
        } else {
            printf("El anio %d NO es bisiesto.\n", anio);
        }
    } else {
        printf("Error: Ingrese un anio valido mayor a 0.\n");
    }

    return 0;
}
