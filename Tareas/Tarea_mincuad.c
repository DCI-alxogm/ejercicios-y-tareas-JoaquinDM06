#include <stdio.h>

#define N 20

int main() {
    float distancia[N], tiempo[N], velocidad[N];
    float suma_tiempo = 0, suma_distancia = 0, suma_tiempo2 = 0, suma_tiempo_distancia = 0;
    float a, b; // Coeficientes de la recta: distancia = a * tiempo + b

    // Solicitar al usuario los datos
    printf("Introduce 20 pares de valores de distancia (m) y tiempo (s):\n");
    for (int i = 0; i < N; i++) {
        printf("\nDatos #%d:\n", i + 1);
        printf("  Distancia (m): ");
        scanf("%f", &distancia[i]);
        printf("  Tiempo (s): ");
        scanf("%f", &tiempo[i]);

        // Acumular valores para mínimos cuadrados
        suma_tiempo += tiempo[i];
        suma_distancia += distancia[i];
        suma_tiempo2 += tiempo[i] * tiempo[i];
        suma_tiempo_distancia += tiempo[i] * distancia[i];
    }

    // Calcular velocidad individual
    printf("\nVelocidades calculadas (m/s):\n");
    for (int i = 0; i < N; i++) {
        if (tiempo[i] != 0) {
            velocidad[i] = distancia[i] / tiempo[i];
        } else {
            velocidad[i] = 0;
            printf("Advertencia: tiempo[%d] es cero. Velocidad establecida en 0.\n", i+1);
        }
        printf("V[%d] = %.2f m/s\n", i+1, velocidad[i]);
    }

    // Cálculo de la recta de mínimos cuadrados
    float denominador = N * suma_tiempo2 - suma_tiempo * suma_tiempo;
    if (denominador != 0) {
        a = (N * suma_tiempo_distancia - suma_tiempo * suma_distancia) / denominador;
        b = (suma_distancia * suma_tiempo2 - suma_tiempo * suma_tiempo_distancia) / denominador;

        printf("\nEcuación de la mejor recta que se ajusta a los datos:\n");
        printf("d(t) = %.4f * t ", a);
        if (b > 0) {
            printf("+ %.4f\n", b);
        } else if (b < 0) {
            printf("- %.4f\n", -b);
        } else {
            printf("\n"); // b = 0, no se muestra
        }
    } else {
        printf("\nNo se puede calcular la recta de mínimos cuadrados (división por cero).\n");
    }


    return 0;
}

