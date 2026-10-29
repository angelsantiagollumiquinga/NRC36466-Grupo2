//1.17 Conversión de decimal a binario
//Convierte un número base 10 a base 2 mediante divisiones, armando los restos matemáticamente.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int n, resto;
    long long binario = 0, mult = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0) {
            printf("Su representacion en binario es: 0\n");
        } else {
            int original = n;

            while (n > 0) {
                resto = n % 2;
                binario = binario + (resto * mult);
                n = n / 2;
                mult = mult * 10;
            }

            printf("El numero %d en binario es: %lld\n", original, binario);
        }
    } else {
        printf("Error: Ingrese un numero positivo.\n");
    }

    return 0;
}
