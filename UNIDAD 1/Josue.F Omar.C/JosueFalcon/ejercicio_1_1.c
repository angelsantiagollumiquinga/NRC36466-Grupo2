#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Ingrese un numero x: ");
    scanf("%f", &x);
    float resultado = pow(fabs(x), 3);
    printf("El valor absoluto al cubo es: %.2f\n", resultado);
    return 0;
}
