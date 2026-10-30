#include <stdio.h>

int main() {
    int secreto = 42, intentos = 0, intento = 0;

    while (intento != secreto) {
        printf("Adivina un numero entre 1 y 100: ");
        scanf("%d", &intento);
        intentos++;

        if (intento > secreto) {
            printf("Mas bajo\n");
        } else if (intento < secreto) {
            printf("Mas alto\n");
        } else {
            printf("Acertaste!\n");
        }
    }

    printf("Total de intentos: %d\n", intentos);

    return 0;
}
