#include <stdio.h>

int main()
{
    // Declaración de variable de tipo decimal/real
    float x;

    // Lectura del número por teclado
    printf("Ingrese un numero: ");
    scanf("%f", &x);

    // Condicional compuesto utilizando el operador lógico AND (&&)
    if (x >= 0 && x <= 10) {
        printf("El numero pertenece al intervalo [0, 10]\n");
    } else {
        printf("El numero no pertenece al intervalo [0, 10]\n");
    }

    return 0;
}
