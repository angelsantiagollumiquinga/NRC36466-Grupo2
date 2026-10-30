#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un entero n >= 1: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
