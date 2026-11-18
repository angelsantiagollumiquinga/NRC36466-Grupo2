//Tarea: Menu 3 - Validacion de Fecha y Series
//Programa con modulo y con switch para validar fechas (1900-2015) y desplegar series de letras y numeros.
//Realizado por Ayala Luis
#include <stdio.h> // Libreria estandar de entrada y salida
#include <stdlib.h> // Libreria para limpiar pantalla con system("cls")
#include <conio.h> // Libreria para pausar consola con getch()
#include <windows.h> // Libreria para pausas con Sleep()

// ---- PROTOTIPOS DE FUNCIONES ----
void mostrarMenu();
    int esBisiesto(int anio);
    int obtenerDasiMes(int mes, int anio);
    void imprimirNombreMes(int mes);
    void validarFecha();

    int main() {
    int opcion;

    do {
        system("cls"); // Limpia la pantalla en cada regreso al menu para que haci el progrma limpie la pista antes de que el siuinte paso se ejecute
        mostrarMenu();
        scanf("%d", &opcion);

    switch (opcion) {
    case 1:
        validarFecha();
    break;
    case 4:
        printf("\nSaliendo del programa...\n");
    break;
    default:
        printf("\nOpcion invalida. Presione una tecla para continuar");
        getch();
    break;
}
}   while (opcion != 4);

    return 0;
}
// ---- DEFINICION DE FUNCIONES ----
// MENU PRINCIPAL
    void mostrarMenu() {
        printf("MENU N3\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese opcion para continuar: ");
}

// Retorna 1 si el anio es bisiesto, o 0 si no lo es
    int esBisiesto(int anio) {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
    return 1;
}
    return 0;
}

// Devuelve la cantidad maxima de dias segun el mes y si el anio es bisiesto
    int obtenerDiasMes(int mes, int anio) {
        switch (mes) {
        case 2:
            if (esBisiesto(anio) == 1) {
                return 29;
                }   else {
                return 28;
                }
                    case 4:
                    case 6:
                    case 9:
                    case 11:
                    return 30;
                    default:
                return 31;
}
}

// Imprime el nombre del mes
    void imprimirNombreMes(int mes) {
    switch (mes) {
        case 1: printf("Enero"); break;
        case 2: printf("Febrero"); break;
        case 3: printf("Marzo"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Mayo"); break;
        case 6: printf("Junio"); break;
        case 7: printf("Julio"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Septiembre"); break;
        case 10: printf("Octubre"); break;
        case 11: printf("Noviembre"); break;
        case 12: printf("Diciembre"); break;
}
}

// Opcion 1: Valida anio (1900-2015), mes (1-12) y dia real del mes
    void validarFecha() {
        int anio, mes, dia, maxDias;

// 1. Validacion de anio en el rango 1900 - 2015
                do {
            printf("Ingrese el anio (1900-2015): ");
            scanf("%d", &anio);
}   while (anio < 1900 || anio > 2015);

// 2. Validacion de mes en el rango 1 - 12
        do {
            printf("Ingrese el mes (1-12): ");
            scanf("%d", &mes);
}   while (mes < 1 || mes > 12);

// Calcula el limite real de dias para ese mes y anio (incluyendo bisiesto)
            maxDias = obtenerDiasMes(mes, anio);

// 3. Validacion de dia
    do {
            printf("Ingrese el dia (1-31): ");
            scanf("%d", &dia);
}   while (dia < 1 || dia > maxDias);

// Salida formateada
            printf("Fecha valida: %d de ", dia);
            imprimirNombreMes(mes);
            printf(" de %d\n", anio);
            printf("Presione una tecla para continuar");
            getch();
}


