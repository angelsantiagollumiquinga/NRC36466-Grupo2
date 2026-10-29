//1.11 Serie de Fibonacci
//Genera y muestra los primeros 'n' términos de la secuencia sumando los dos valores anteriores.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i = 1;

    printf("Ingrese cuantos terminos de Fibonacci desea: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("Serie: ");
        while (i <= n) {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
            i = i + 1;
        }
        printf("\n");
    } else {
        printf("Error: Ingrese un numero mayor o igual a 1.\n");
    }

    return 0;
}
