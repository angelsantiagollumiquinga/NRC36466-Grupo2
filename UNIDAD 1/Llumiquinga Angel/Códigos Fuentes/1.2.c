#include <stdio.h> //

int main()
{
    // Declaración de variables
    float x, x_abs, resultado;

    // Entrada de datos
    printf("Ingrese un numero: ");
    scanf("%f", &x);

    // 1. Lógica propia para el Valor Absoluto
    if (x < 0) {
        x_abs = -x;  // Si es negativo, le invertimos el signo para volverlo positivo
    } else {
        x_abs = x;   // Si es cero o positivo, se queda exactamente igual
    }

    // 2. Lógica propia para elevar al cubo (sin usar pow)
    resultado = x_abs * x_abs * x_abs;

    // Salida de datos
    printf("La solucion es: %.2f\n", resultado);

    return 0;
}
