#include <stdio.h>

int main()
{
    int secreto = 42, intento, intentos = 0;

    do {
        printf("Adivina el numero (1 al 100): ");
        scanf("%d", &intento);
        intentos++;

        if (intento < secreto) {
            printf("mas alto\n");
        } else if (intento > secreto) {
            printf("mas bajo\n");
        }
    } while (intento != secreto); // Continúa MIENTRAS NO sea igual al secreto

    printf("¡Acertaste! Usaste %d intentos.\n", intentos);

    return 0;
}
