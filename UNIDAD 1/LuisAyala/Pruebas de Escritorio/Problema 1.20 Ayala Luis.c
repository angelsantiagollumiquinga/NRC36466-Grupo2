//1.20 Adivina el número
//Juego interactivo que da pistas de "más alto" o "bajo" hasta que el usuario acierte el número secreto.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int secreto = 42;
    int intento = 0, intentos = 0;

    printf("¡Adivina el numero secreto entre 1 y 100!\n");

    while (intento != secreto) {
        printf("\nIngresa tu intento: ");
        scanf("%d", &intento);

        intentos = intentos + 1;

        if (intento < secreto) {
            printf("Mas alto...\n");
        } else if (intento > secreto) {
            printf("Mas bajo...\n");
        } else {
            printf("¡Acertaste!\n");
        }
    }

    printf("Te tomo %d intentos adivinarlo.\n", intentos);

    return 0;
}
