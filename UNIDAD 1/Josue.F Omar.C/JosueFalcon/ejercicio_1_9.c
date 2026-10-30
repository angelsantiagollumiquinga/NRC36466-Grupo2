#include <stdio.h>

int main() {
    int a, b, inicio_val, fin_val, divisores;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    if (a < b) {
        inicio_val = a;
        fin_val = b;
    } else {
        inicio_val = b;
        fin_val = a;
    }

    printf("Numeros primos entre %d y %d:\n", inicio_val, fin_val);
    for (int i = inicio_val; i <= fin_val; i++) {
        if (i > 1) {
            divisores = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    divisores++;
                }
            }
            if (divisores == 2) {
                printf("%d ", i);
            }
        }
    }
    printf("\n");

    return 0;
}
