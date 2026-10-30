#include <stdio.h>

int main()
{
    int num, mayor = 0, segundo = 0, contador = 0;

    printf("Ingrese secuencia de numeros positivos (0 para terminar): ");
    scanf("%d", &num);

    while (num > 0) {
        contador++;
        if (num > mayor) {
            segundo = mayor; // El antiguo mayor pasa a ser el segundo mayor
            mayor = num;     // El número nuevo ocupa el primer lugar
        } else if (num > segundo) {
            segundo = num;   // Se actualiza únicamente el segundo mayor
        }
        scanf("%d", &num);
    }

    if (contador >= 2) {
        printf("Mayor: %d - Segundo mayor: %d\n", mayor, segundo);
    } else {
        printf("Se requieren al menos dos numeros en la secuencia.\n");
    }

    return 0;
}
