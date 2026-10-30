#include <stdio.h>

int main()
{
    // Declaración de variables enteras
    int n, suma, digito;

    // Entrada de datos
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    // Inicialización del acumulador de suma
    suma = 0;

    // Bucle Mientras: se ejecuta mientras queden dígitos por extraer (n > 0)
    while (n > 0) {
        digito = n % 10;     // extrae el último dígito usando el operador módulo (%)
        suma = suma + digito; // acumula el dígito extraído
        n = n / 10;          // al dividir entre enteros en C, se descarta automáticamente la parte decimal (truncado)
    }

    // Salida de datos
    printf("La suma de los digitos es %d\n", suma);

    return 0;
}
