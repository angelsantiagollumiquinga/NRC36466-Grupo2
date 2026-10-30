#include <stdio.h>

int main()
{
    // Declaración de variables
    int n1, n2;
    float resultado;

    // Entrada de datos
    printf("Ingrese el primer valor: ");
    scanf("%d", &n1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &n2);

    // Evaluación condicional anidada
    if (n2 == 0) {
        printf("No existe division para cero\n");
    } else {
        // En C, el operador módulo para enteros es el símbolo de porcentaje %
        if (n1 % n2 == 0) {
            // Conversión explícita (float) para asegurar división real limpia
            resultado = (float)n1 / n2;
            printf("La division exacta es %.2f\n", resultado);
        } else {
            printf("No es posible dividir\n");
        }
    }

    return 0;
}
