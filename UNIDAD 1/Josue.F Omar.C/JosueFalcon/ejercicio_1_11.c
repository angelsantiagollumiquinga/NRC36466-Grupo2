#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Ingrese la cantidad de terminos a mostrar: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
