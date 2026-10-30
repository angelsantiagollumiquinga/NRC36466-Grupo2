#include <stdio.h>

int main()
{
    // Declaración de variable entera
    int anio;

    // Entrada de datos
    printf("Ingrese el ano: ");
    scanf("%d", &anio);

    // Condicional compuesto con operadores lógicos:
    // && equivale a Y (AND)
    // != equivale a <> (Diferente de)
    // || equivale a O (OR)
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        printf("%d es bisiesto.\n", anio);
    } else {
        printf("%d NO es bisiesto.\n", anio);
    }

    return 0;
}
