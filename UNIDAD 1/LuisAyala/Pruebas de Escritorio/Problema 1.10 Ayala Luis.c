//1.10 Factorial
//Calcula el factorial de un número positivo multiplicando todos los enteros desde 1 hasta n.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int n, i = 1, fact = 1;

    printf("Ingrese un numero entero (>= 0): ");
    scanf("%d", &n);

    if (n >= 0) {
        while (i <= n) {
            fact = fact * i;
            i = i + 1;
        }
        printf("El factorial de %d es: %d\n", n, fact);
    } else {
        printf("El factorial no esta definido para numeros negativos.\n");
    }

    return 0;
}
