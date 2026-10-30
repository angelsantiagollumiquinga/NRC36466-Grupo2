#include <stdio.h>

int main() {
    int c, dias, resto_dias, horas, resto_horas, minutos, segundos;
    printf("Ingrese el numero de segundos: ");
    scanf("%d", &c);
    dias = c / 86400;
    resto_dias = c % 86400;
    horas = resto_dias / 3600;
    resto_horas = resto_dias % 3600;
    minutos = resto_horas / 60;
    segundos = resto_horas % 60;
    printf("%d segundos equivalen a: %d dias, %d horas, %d minutos y %d segundos.\n", c, dias, horas, minutos, segundos);
    return 0;
}
