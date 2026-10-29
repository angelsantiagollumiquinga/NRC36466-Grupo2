//1.1 Media de dos valores
//Calcula y muestra el promedio matemático de dos números ingresados por el usuario.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    float num1, num2, media;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    media = (num1 + num2) / 2.0;

    printf("La media es: %.2f\n", media);

    return 0;
}
