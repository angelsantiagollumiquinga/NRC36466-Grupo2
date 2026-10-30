#include <stdio.h>

int main()
{
    // Declaración de variables tipo entero (int)
    int C, dias, hora, minuto, seg, resto;

    // Entrada de datos
    printf("Ingrese el numero de segundos: ");
    scanf("%d", &C);

    // Proceso: Conversión de segundos a días, horas, minutos y segundos
    // En C, la división de enteros (int / int) trunca automáticamente la parte decimal
    dias = C / 86400;
    resto = C % 86400;  // Operador módulo en C es %

    hora = resto / 3600;
    resto = resto % 3600;

    minuto = resto / 60;
    seg = resto % 60;

    // Salida de datos
    printf("Equivale a: %d dias, %d horas, %d minutos y %d segundos\n", dias, hora, minuto, seg);

    return 0;
}
