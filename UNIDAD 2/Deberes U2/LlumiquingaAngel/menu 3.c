//Elaborado por Llumiquinga Angel
//El codigo debera imprimir un menu con 4 opciones
//1.Validar la fecha entre 1900-2015
//2.Desplegar serie de letras segun el valor de terminos ingresado
//3.Desplegar serie de numeros segun el valor de terminos ingresados
//4.Salir del menu
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int opcion;

    // RF-01
    do {
        system("cls");
        printf("MENU\n");
        printf("1. Validar fecha\n");
        printf("2. Deplegar serie letras\n");
        printf("3. Deplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                // RF-02: Validar fecha
                int anio, mes, dia, maxDias;

                // Validar anio entre 1900 y 2015
                do {
                    printf("Ingrese el anio (1900 - 2015): ");
                    scanf("%d", &anio);
                } while (anio < 1900 || anio > 2015);

                // Validar mes entre 1 y 12
                do {
                    printf("Ingrese el mes (1 - 12): ");
                    scanf("%d", &mes);
                } while (mes < 1 || mes > 12);

                // Determinar dias maximos segun el mes (febrero hasta 29)
                if (mes == 2) {
                    maxDias = 29;
                } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                    maxDias = 30;
                } else {
                    maxDias = 31;
                }

                // Validar dia dentro del rango del mes
                do {
                    printf("Ingrese el dia (1 - %d): ", maxDias);
                    scanf("%d", &dia);
                } while (dia < 1 || dia > maxDias);

                // Mostrar fecha
                printf("\nFecha ingresada: %d de ", dia);
                switch (mes) {
                    case 1:  printf("Enero"); break;
                    case 2:  printf("Febrero"); break;
                    case 3:  printf("Marzo"); break;
                    case 4:  printf("Abril"); break;
                    case 5:  printf("Mayo"); break;
                    case 6:  printf("Junio"); break;
                    case 7:  printf("Julio"); break;
                    case 8:  printf("Agosto"); break;
                    case 9:  printf("Septiembre"); break;
                    case 10: printf("Octubre"); break;
                    case 11: printf("Noviembre"); break;
                    case 12: printf("Diciembre"); break;
                }
                printf(" de %d\n", anio);
                break;
            }

            case 2: {
                // RF-03: Desplegar serie de letras en fraccion
                int n, i;
                char letraSup, letraInf;

                // Repetir hasta que n sea mayor que 0
                do {
                    printf("Ingrese la cantidad de terminos (> 0): ");
                    scanf("%d", &n);
                } while (n <= 0);

                printf("\n");
                // Fila 1: letras impares comenzando en a +2 por termino
                letraSup = 'a';
                for (i = 0; i < n; i++) {
                    printf("%c\t", letraSup);
                    letraSup += 2;
                }
                printf("\n");

                // Fila 2: guiones de separacion
                for (i = 0; i < n; i++) {
                    printf("-\t");
                }
                printf("\n");

                // Fila 3: letras pares comenzando en b +2 por termino
                letraInf = 'b';
                for (i = 0; i < n; i++) {
                    printf("%c\t", letraInf);
                    letraInf += 2;
                }
                printf("\n");
                break;
            }

            case 3: {
                // RF-04: Desplegar serie numerica intercalada
                int n, i;
                int num1 = 1, num2 = 5; // Reinicio inicial en 1 y 5

                // Repetir si es negativo
                do {
                    printf("Ingrese la cantidad de terminos (>= 0): ");
                    scanf("%d", &n);
                } while (n < 0);

                printf("\n");
                // Imprimir parejas completas
                for (i = 0; i < n / 2; i++) {
                    printf("%d, %d", num1, num2);
                    num1 += 2;
                    num2 += 2;
                    // Agregar coma si aun faltan terminos
                    if (i < (n / 2) - 1 || n % 2 != 0) {
                        printf(", ");
                    }
                }

                // Completar la serie si es impar
                if (n % 2 != 0) {
                    printf("%d", num1);
                }
                printf("\n");
                break;
            }

            case 4:
                // RF-05: Salir del programa
                printf("Salir...\n");
                break;

            default:
                // RF-01: Opcion fuera del rango 1-4
                printf("Opcion no valida\n");
                break;
        }

        if (opcion != 4) {
            printf("\nPresione una tecla para continuar...");
            getch();
        }

    } while (opcion != 4);

    return 0;
}
