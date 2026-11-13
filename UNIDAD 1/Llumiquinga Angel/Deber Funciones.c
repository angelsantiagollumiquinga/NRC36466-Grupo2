#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>

// Opcion 1: Funcion para imprimir un triangulo
void triangulo(int filas) {
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Funcion recursiva de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Caso base 1
    } else if (n == 1) {
        return 1; // Caso base 2
    } else {
        // Caso recursivo: se llama a si misma
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Opcion 2: imprime la serie de Fibonacci
void mostrarFibonacci(int limite) {
    int i = 0;
    int termino = fibonacci(i);

    printf("Serie de Fibonacci hasta el limite %d:\n", limite);
    while (termino <= limite) {
        printf("%d ", termino);
        i++;
        termino = fibonacci(i);
    }
    printf("\n");
}

// Funcion del menu con switch-case
void menu() {
    int opcion, filas, limite;

    do {
        printf("\n--- MENU DE OPCIONES ---\n");
        printf("1. Figura triangulo rectangulo\n");
        printf("2. Serie de Fibonacci (recursiva)\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el numero de filas del triangulo: ");
                scanf("%d", &filas);
                triangulo(filas);
                break;

            case 2:
                printf("Ingrese el valor limite para la serie de Fibonacci: ");
                scanf("%d", &limite);
                mostrarFibonacci(limite);
                break;

            case 3:
                printf("ha salido del menu\n");
                break;

            default:
                printf("Error: Opcion no valida. Intente nuevamente.\n");
                break;
        }
    } while (opcion != 3);
}

int main() {
    menu();
    return 0;
}
