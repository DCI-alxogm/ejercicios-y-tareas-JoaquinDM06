#include <stdio.h>

int main() {
    int num;
    char opcion;

    do {
        do {
            printf("Ingrese un número positivo:\n");
            scanf("%d", &num);
        } while (num <= 0);

        printf("El número ingresado: %d es positivo\n", num);

        printf("¿Desea ingresar otro número? (s/n): ");
        scanf(" %c", &opcion); // Espacio antes de %c para evitar problemas con el buffer

    } while (opcion == 's' || opcion == 'S');

    printf("Programa finalizado.\n");

    return 0;
}

