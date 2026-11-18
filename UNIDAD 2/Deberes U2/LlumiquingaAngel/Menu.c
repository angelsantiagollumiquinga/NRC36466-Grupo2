#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion;
    int anio, mes, dia;

    do {
        // Presentar el menú principal
        printf("MENU\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese opcion: ");

        if (scanf("%d", &opcion) != 1) {

            printf("Opcion no valida\n");
            while (getchar() != '\n');
            printf("\nPresione Enter para continuar...");
            getchar();
            system("cls");
            continue;
        }

        switch (opcion) {
            case 1:
                // RF-02 | Opción 1: Validar fecha

                // Solicitar año (1900 a 2015)
                do {
                    printf("Ingrese anio (1900-2015): ");
                    scanf("%d", &anio);
                    if (anio < 1900 || anio > 2015) {

                    }
                } while (anio < 1900 || anio > 2015);

                // Solicitar mes (intervalo de 1 a 12 inclusive)
                do {
                    printf("Ingrese mes (1-12): ");
                    scanf("%d", &mes);
                } while (mes < 1 || mes > 12);

                // Solicitar día válido según el mes seleccionado
                do {
                    printf("Ingrese dia: ");
                    scanf("%d", &dia);

                    if (mes == 2) {
                        // Febrero: de 1 a 29 (admite 29 para cualquier año según observación)
                        if (dia < 1 || dia > 29) {
                            dia = 0; // Fuerza la repetición
                        }
                    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                        // Abril, junio, septiembre, noviembre: de 1 a 30
                        if (dia < 1 || dia > 30) {
                            dia = 0;
                        }
                    } else {
                        // Enero, marzo, mayo, julio, agosto, octubre, diciembre: de 1 a 31
                        if (dia < 1 || dia > 31) {
                            dia = 0;
                        }
                    }
                } while (dia < 1);

                // Determinar el nombre del mes en español
                char *nombreMes = "";
                switch (mes) {
                    case 1:  nombreMes = "enero"; break;
                    case 2:  nombreMes = "febrero"; break;
                    case 3:  nombreMes = "marzo"; break;
                    case 4:  nombreMes = "abril"; break;
                    case 5:  nombreMes = "mayo"; break;
                    case 6:  nombreMes = "junio"; break;
                    case 7:  nombreMes = "julio"; break;
                    case 8:  nombreMes = "agosto"; break;
                    case 9:  nombreMes = "septiembre"; break;
                    case 10: nombreMes = "octubre"; break;
                    case 11: nombreMes = "noviembre"; break;
                    case 12: nombreMes = "diciembre"; break;
                }

                // Mostrar la fecha
                printf("\nFecha ingresada: %d de %s de %d\n", dia, nombreMes, anio);


                while (getchar() != '\n');
                printf("\nPresione Enter para continuar...");
                getchar();
                system("cls");
                break;

            default:
                // opcion no valida
                printf("Opcion no valida\n");
                while (getchar() != '\n');
                printf("\nPresione Enter para continuar...");
                getchar();
                system("cls");
                break;
        }

    } while (opcion != 4);

    return 0;
}
