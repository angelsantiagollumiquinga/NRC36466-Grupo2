//1.3 Divisible
//Verifica si un número entero es divisible para otro comprobando si su residuo es cero.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            printf("El numero SI es divisible.\n");
        } else {
            printf("El numero NO es divisible.\n");
        }
    } else {
        printf("Error: No se puede dividir para cero.\n");
    }

    return 0;
}
