#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float tk, tc; // temperatura
    float x, y, z, rc, r, theta, phi; // coordenadas cartesianas, cilíndricas y esféricas
    int opc, opcCoord; // opciones del usuario

repetirtodo:
    printf("\nSeleccione una opción:\n");
    printf("0 - Convertir temperatura (°C a K)\n");
    printf("1 - Convertir coordenadas cartesianas\n");
    printf("Opción: ");
    scanf("%d", &opc);

    if (opc == 0) {
        goto temperatura;
    } else if (opc == 1) {
        goto tipoCoordenadas;
    } else {
        printf("Opción no válida. Intente de nuevo.\n");
        goto repetirtodo;
    }

temperatura:
    printf("\nIngrese la temperatura a convertir (°C): ");
    scanf("%f", &tc);
    tk = tc + 273.15;
    printf("Su temperatura en Kelvin es: %.2f\n", tk);
    goto preguntar;

tipoCoordenadas:
    printf("\nSeleccione la conversión de coordenadas desde cartesianas:\n");
    printf("1 - A coordenadas cilíndricas\n");
    printf("2 - A coordenadas esféricas\n");
    printf("Opción: ");
    scanf("%d", &opcCoord);

    if (opcCoord == 1) {
        goto cartesianasACilindricas;
    } else if (opcCoord == 2) {
        goto cartesianasAEsfericas;
    } else {
        printf("Opción no válida. Intente de nuevo.\n");
        goto tipoCoordenadas;
    }

cartesianasACilindricas:
    printf("\nIngrese las coordenadas cartesianas (x, y, z): ");
    scanf("%f %f %f", &x, &y, &z);

    rc = sqrt(x * x + y * y);
    theta = atan2(y, x); // Ángulo en radianes

    printf("Coordenadas cilíndricas equivalentes:\n");
    printf("rc = %.2f, theta = %.2f rad, z = %.2f\n", rc, theta, z);
    goto preguntar;

cartesianasAEsfericas:
    printf("\nIngrese las coordenadas cartesianas (x, y, z): ");
    scanf("%f %f %f", &x, &y, &z);

    r = sqrt(x * x + y * y + z * z);
    theta = atan2(y, x); // Ángulo en radianes
    phi = acos(z / r);    // Ángulo en radianes

    printf("Coordenadas esféricas equivalentes:\n");
    printf("r = %.2f, theta = %.2f rad, phi = %.2f rad\n", r, theta, phi);
    goto preguntar;

preguntar:
    printf("\n¿Desea realizar otra conversión? (1: Sí, 0: No): ");
    scanf("%d", &opc);

    if (opc == 1) {
        goto repetirtodo;
    }

    printf("Programa finalizado.\n");
    return 0;
}
