#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese dos numeros enteros (a y b): ");
    scanf("%d %d", &a, &b);
    if (b != 0 && a % b == 0) {
        printf("El primer numero es divisible por el segundo.\n");
    } else {
        printf("El primer numero NO es divisible por el segundo.\n");
    }
    return 0;
}
