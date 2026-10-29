//1.2 Valor absoluto de x al cubo
//Obtiene el valor positivo de un número y lo eleva a la tercera potencia.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    float x, abs_x, cubo;

    printf("Ingrese un numero: ");
    scanf("%f", &x);

    if (x < 0) {
        abs_x = x * -1.0;
    } else {
        abs_x = x;
    }

    cubo = abs_x * abs_x * abs_x;

    printf("El valor absoluto al cubo es: %.2f\n", cubo);

    return 0;
}
