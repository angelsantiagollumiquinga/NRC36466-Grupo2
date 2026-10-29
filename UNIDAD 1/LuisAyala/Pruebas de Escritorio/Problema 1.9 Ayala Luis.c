//1.9 Números primos entre dos números dados
//Evalúa y muestra todos los números primos que existen dentro de un intervalo ingresado.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int limInf, limSup, num, i, esPrimo;

    printf("Ingrese el limite inferior: ");
    scanf("%d", &limInf);
    printf("Ingrese el limite superior: ");
    scanf("%d", &limSup);

    printf("Numeros primos entre %d y %d:\n", limInf, limSup);

    num = limInf;
    while (num <= limSup) {
        if (num > 1) {
            esPrimo = 1;
            i = 2;

            while (i * i <= num && esPrimo == 1) {
                if (num % i == 0) {
                    esPrimo = 0;
                } else {
                    i = i + 1;
                }
            }

            if (esPrimo == 1) {
                printf("%d ", num);
            }
        }
        num = num + 1;
    }
    printf("\n");

    return 0;
}
