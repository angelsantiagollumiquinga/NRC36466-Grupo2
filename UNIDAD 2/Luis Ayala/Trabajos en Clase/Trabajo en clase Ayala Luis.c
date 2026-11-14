//Trabajo en clase
//Menu Switch con Funciones: Triangulo Normal y Serie Exponencial
//Realizado por Ayala Luis
#include <stdio.h>   // Libreria estandar de entrada y salida
#include <stdlib.h>  // Libreria para limpiar pantalla con system("cls")
#include <windows.h> // Libreria de Windows para pausas con Sleep()
#include <conio.h>   // Libreria para pausar consola con getch()

// --- PROTOTIPOS DE FUNCIONES ---
void mostrarMenu();
int leerEnteroValido(char mensaje[], int minimo);
void dibujarTriangulo(int n);
long long calcularPotencia(int base, int exponente);
void procesarSerieExponencial(int n, int exponente);

int main() {
    int opcion, n, exponente; // Variables de control y entrada

    do {
        system("cls"); // Limpia la pantalla en cada ciclo
        mostrarMenu(); // Llama a la funcion que imprime el menu
        scanf("%d", &opcion); // Lee la opcion elegida por el usuario

        system("cls"); // Limpia el menu antes de mostrar la opcion

        switch (opcion) {
            case 1:
                printf("=== 1. GRAFICO TRIANGULO NORMAL ===\n\n");
                n = leerEnteroValido("Lineas del triangulo (minimo 1): ", 1); // Valida n > 0
                printf("\n");
                dibujarTriangulo(n); // Llama a la funcion que dibuja el triangulo
                printf("\nPresione cualquier tecla para volver al menu...");
                getch(); // Espera una tecla sin mostrarla en pantalla
                break;

            case 2:
                printf("=== 2. SERIE DE NUMEROS ELEVADOS AL EXPONENTE ===\n\n");
                n = leerEnteroValido("Ingrese la cantidad de terminos (n >= 1): ", 1); // Valida n >= 1
                exponente = leerEnteroValido("Ingrese el exponente (exp >= 0): ", 0); // Valida exp >= 0
                printf("\n");
                procesarSerieExponencial(n, exponente); // Llama a la funcion de la serie
                printf("\nPresione cualquier tecla para volver al menu...");
                getch(); // Pausa la consola hasta presionar una tecla
                break;

            case 3:
                printf("Saliendo del sistema...\n");
                Sleep(1000); // Pausa de 1000 milisegundos (1 segundo)
                break;

            default:
                printf("Opcion invalida. Seleccione entre 1 y 3.\n");
                printf("\nPresione cualquier tecla para intentar de nuevo...");
                getch(); // Espera una tecla antes de repetir el menu
                break;
        }
    } while (opcion != 3); // Repite mientras no se elija salir

    return 0; // Fin del programa
}

// --- DEFINICION DE FUNCIONES ---

// 1. Muestra las opciones del menu en consola
void mostrarMenu() {
    printf("==================================================\n");
    printf("         TRABAJO EN CLASE - MENU PRINCIPAL        \n");
    printf("==================================================\n");
    printf("1. Grafico Triangulo Normal\n");
    printf("2. Serie de numeros elevados al exponente y su suma\n");
    printf("3. Salir\n");
    printf("==================================================\n");
    printf("Seleccione una opcion: ");
}

// 2. Valida que el numero ingresado cumpla con un valor minimo
int leerEnteroValido(char mensaje[], int minimo) {
    int valor;
    do {
        printf("%s", mensaje); // Muestra el mensaje recibido por parametro
        scanf("%d", &valor); // Lee el numero entero
        if (valor < minimo) { // Verifica si esta por debajo del minimo permitido
            printf("Error: El valor debe ser mayor o igual a %d.\n", minimo);
        }
    } while (valor < minimo); // Repite hasta que el dato sea valido
    return valor; // Devuelve el valor validado
}

// 3. Dibuja un triangulo centrado de n filas usando ciclos anidados
void dibujarTriangulo(int n) {
    int i, j;
    for (i = 1; i <= n; i++) { // Ciclo externo para las filas
        for (j = 1; j <= n - i; j++) { // Ciclo interno para los espacios a la izquierda
            printf(" ");
        }
        for (j = 1; j <= i; j++) { // Ciclo interno para imprimir los asteriscos
            printf("* ");
        }
        printf("\n"); // Salto de linea al terminar cada fila
    }
}

// 4. Calcula base^exponente mediante multiplicaciones sucesivas
long long calcularPotencia(int base, int exponente) {
    long long resultado = 1; // Acumulador multiplicativo inicia en 1
    int i;
    for (i = 1; i <= exponente; i++) { // Multiplica la base tantas veces como indique el exponente
        resultado = resultado * base;
    }
    return resultado; // Retorna la potencia calculada
}

// 5. Genera la serie 1^e + 2^e + ... + n^e, muestra los terminos y su suma
void procesarSerieExponencial(int n, int exponente) {
    int i;
    long long termino, suma = 0; // Acumulador de suma inicia en 0

    printf("Expresion: ");
    for (i = 1; i <= n; i++) { // Recorre desde 1 hasta n para mostrar la formula
        printf("%d^%d", i, exponente);
        if (i < n) {
            printf(" + "); // Agrega signo mas entre terminos
        }
    }

    printf("\nDesarrollo: ");
    for (i = 1; i <= n; i++) { // Recorre desde 1 hasta n para calcular cada valor
        termino = calcularPotencia(i, exponente); // Llama a la funcion potencia
        suma = suma + termino; // Suma el termino al acumulador total
        printf("%lld", termino);
        if (i < n) {
            printf(" + "); // Agrega signo mas entre resultados
        }
    }

    printf("\n\nLa suma total de la serie es: %lld\n", suma); // Muestra la suma final
}
