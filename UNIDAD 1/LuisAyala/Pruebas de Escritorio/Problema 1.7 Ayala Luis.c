//1.7 Raíz cuadrada entera
//Calcula la raíz cuadrada entera por defecto de un número mediante aproximaciones sucesivas.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int N, i = 1, R;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);

    if (N >= 0) {
        while (i * i <= N) {
            i = i + 1;
        }

        R = i - 1;
        printf("La raiz cuadrada entera de %d es: %d\n", N, R);
    } else {
        printf("Error: Ingrese un numero positivo.\n");
    }

    return 0;
}
