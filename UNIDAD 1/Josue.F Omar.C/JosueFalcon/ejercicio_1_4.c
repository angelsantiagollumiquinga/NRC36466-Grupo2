#include <stdio.h>

int main() {
    float x;
    printf("Ingrese un numero: ");
    scanf("%f", &x);
    if (x >= 0 && x <= 10) {
        printf("El numero pertenece al intervalo [0, 10].\n");
    } else {
        printf("El numero NO pertenece al intervalo [0, 10].\n");
    }
    return 0;
}
