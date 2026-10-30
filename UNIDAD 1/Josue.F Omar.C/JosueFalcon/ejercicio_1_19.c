#include <stdio.h>

int main() {
    int mayor = -1, segundo = -1, contador = 0, num;

    printf("Ingrese un numero entero positivo (0 para terminar): ");
    scanf("%d", &num);

    while (num > 0) {
        contador++;
        if (num > mayor) {
            segundo = mayor;
            mayor = num;
        } else if (num > segundo && num != mayor) {
            segundo = num;
        }

        printf("Ingrese otro numero entero positivo (0 para terminar): ");
        scanf("%d", &num);
    }

    if (contador < 2) {
        printf("Error: Hay menos de dos valores ingresados.\n");
    } else {
        printf("Mayor: %d\n", mayor);
        printf("Segundo mayor: %d\n", segundo);
    }

    return 0;
}
