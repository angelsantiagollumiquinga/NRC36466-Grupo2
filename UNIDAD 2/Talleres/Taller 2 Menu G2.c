//Manejo de Vectores y Matrices
//Menu de 3 opciones con validacion de vector entero, matriz flotante y salida con confirmacion.
//Realizado por Ayala Luis, Llumiquinga Angel,Sanguano Gabriel, Falcon Josue
#include <stdio.h>   // Libreria estandar de entrada y salida
#include <stdlib.h>  // Libreria para limpiar pantalla con system("cls")
#include <windows.h> // Libreria de Windows para pausas con Sleep()
#include <conio.h>   // Libreria para pausar consola con getch()

int main() {
    int opcion;
    int n, i, j, filas, columnas;
    char confirmar;

    do {
        system("cls"); // Limpia la pantalla en cada regreso al menu
        printf("==================================================\n");
        printf("           G2 - MENU PRINCIPAL           \n");
        printf("==================================================\n");
        printf("1. Ingreso e impresion de un Vector (Enteros > 0)\n");
        printf("2. Ingreso e impresion de una Matriz (Flotantes)\n");
        printf("3. Salir\n");
        printf("==================================================\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        system("cls"); // Limpia el menu antes de ejecutar la opcion

        switch (opcion) {
            case 1: {
                printf("=== 1. CARGA E IMPRESION DE VECTOR ===\n\n");

                // Validar que la cantidad de elementos no sea 0 ni negativo
                do {
                    printf("Ingrese el numero de elementos del vector (mayor a 0): ");
                    scanf("%d", &n);
                    if (n <= 0) {
                        printf("Error: El tamanio no puede ser 0 ni negativo.\n\n");
                    }
                } while (n <= 0);

                int vector[n]; // Declara el vector entero con el tamanio validado

                // Carga del vector validando que cada dato sea mayor a 0
                printf("\n--- Ingreso de datos enteros (ni 0 ni negativos) ---\n");
                for (i = 0; i < n; i++) {
                    do {
                        printf("Elemento [%d]: ", i + 1);
                        scanf("%d", &vector[i]);
                        if (vector[i] <= 0) {
                            printf("Error: El dato no puede ser 0 ni negativo. Intente de nuevo.\n");
                        }
                    } while (vector[i] <= 0);
                }

                // Impresion visible y ordenada del vector
                printf("\n--- VECTOR INGRESADO ---\n");
                for (i = 0; i < n; i++) {
                    printf("[ %d ] ", vector[i]);
                }
                printf("\n\nDetalle por posicion:\n");
                for (i = 0; i < n; i++) {
                    printf("Posicion %d -> %d\n", i + 1, vector[i]);
                }

                printf("\nPresione cualquier tecla para volver al menu...");
                getch(); // Espera una tecla antes de limpiar
                break;
            }

            case 2: {
                printf("=== 2. CARGA E IMPRESION DE MATRIZ ===\n\n");

                // Validar filas (ni 0 ni negativas)
                do {
                    printf("Ingrese el numero de filas (mayor a 0): ");
                    scanf("%d", &filas);
                    if (filas <= 0) {
                        printf("Error: Las filas no pueden ser 0 ni negativas.\n\n");
                    }
                } while (filas <= 0);

                // Validar columnas (ni 0 ni negativas)
                do {
                    printf("Ingrese el numero de columnas (mayor a 0): ");
                    scanf("%d", &columnas);
                    if (columnas <= 0) {
                        printf("Error: Las columnas no pueden ser 0 ni negativas.\n\n");
                    }
                } while (columnas <= 0);

                float matriz[filas][columnas]; // Declara la matriz de tipo flotante

                // Carga de datos flotantes en la matriz
                printf("\n--- Ingreso de datos flotantes ---\n");
                for (i = 0; i < filas; i++) {
                    for (j = 0; j < columnas; j++) {
                        printf("Dato en fila [%d], columna [%d]: ", i + 1, j + 1);
                        scanf("%f", &matriz[i][j]);
                    }
                }

                // Impresion visible de la matriz en formato de tabla
                printf("\n--- MATRIZ INGRESADA (%dx%d) ---\n\n", filas, columnas);
                for (i = 0; i < filas; i++) {
                    for (j = 0; j < columnas; j++) {
                        printf("%.2f\t", matriz[i][j]); // Tabulador para alinear columnas
                    }
                    printf("\n"); // Salto de linea al terminar cada fila
                }

                printf("\nPresione cualquier tecla para volver al menu...");
                getch(); // Congela pantalla hasta presionar tecla
                break;
            }

            case 3: {
                printf("=== 3. CONFIRMACION DE SALIDA ===\n\n");

                // Valida que el usuario escriba S o N
                do {
                    printf("Esta seguro que desea salir del programa? (S/N): ");
                    scanf(" %c", &confirmar); // Espacio antes de %c para limpiar el buffer
                    if (confirmar != 'S' && confirmar != 's' && confirmar != 'N' && confirmar != 'n') {
                        printf("Error: Responda unicamente con S (Si) o N (No).\n\n");
                    }
                } while (confirmar != 'S' && confirmar != 's' && confirmar != 'N' && confirmar != 'n');

                if (confirmar == 'S' || confirmar == 's') {
                    printf("\nCerrando el sistema. Hasta luego!\n");
                    Sleep(1000); // Pausa de 1 segundo antes de cerrar
                } else {
                    printf("\nSalida cancelada. Retornando al menu principal...\n");
                    Sleep(1000);
                    opcion = 0; // Cambia opcion para evitar que el ciclo while termine
                }
                break;
            }

            default:
                printf("Opcion invalida. Seleccione un numero entre 1 y 3.\n");
                printf("\nPresione cualquier tecla para intentar de nuevo...");
                getch();
                break;
        }

    } while (opcion != 3); // Solo termina si opcion se mantiene en 3 (confirmado con 'S')

    return 0; // Fin del programa
}
