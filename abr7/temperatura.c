#include <stdio.h>

int main() {
    float Ti, Tf;
    int n = 20;
    float TC[20], TK[20];

    // Solicitar temperaturas al usuario
    printf("Introduce la temperatura inicial (°C): ");
    scanf("%f", &Ti);

    printf("Introduce la temperatura final (°C): ");
    scanf("%f", &Tf);

    float delta = (Tf - Ti) / (n - 1);

    // Calcular temperaturas
    for (int i = 0; i < n; i++) {
        TC[i] = Ti + i * delta;
        TK[i] = TC[i] + 273.15;
    }

    // Imprimir resultados
    printf("\n i\tTC (°C)\t\tTK (K)\n");
    printf("-------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%2d\t%7.2f\t%7.2f\n", i, TC[i], TK[i]);
    }

    return 0;
}
