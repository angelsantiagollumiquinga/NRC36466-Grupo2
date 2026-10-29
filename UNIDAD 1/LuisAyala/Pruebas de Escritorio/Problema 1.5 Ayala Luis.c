//1.5 Conversión de unidades de tiempo
//Transforma una cantidad dada en segundos a días, horas, minutos y segundos restantes.
//Realizado por Ayala Luis

#include <stdio.h>

int main() {
    int c, dias, horas, minutos, segundos;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &c);

    dias = c / (24 * 60 * 60);
    c = c % (24 * 60 * 60);

    horas = c / (60 * 60);
    c = c % (60 * 60);

    minutos = c / 60;
    segundos = c % 60;

    printf("Equivale a: %d dias, %d horas, %d minutos y %d segundos.\n", dias, horas, minutos, segundos);

    return 0;
}
