#include <stdio.h>
#include <math.h>

int main() {
    double x_inicio, x_fin, paso, x;

    // Solicitar datos al usuario
    printf("Ingrese el valor inicial del intervalo: ");
    scanf("%lf", &x_inicio);
    printf("Ingrese el valor final del intervalo: ");
    scanf("%lf", &x_fin);
    printf("Ingrese el valor del espaciado: ");
    scanf("%lf", &paso);

    // Encabezado
    printf("\n x \t exp(x) \t log(x) \t sin(x) \t cos(x) \t sqrt(x)\n");

    // Evaluar las funciones en el intervalo dado
    for (x = x_inicio; x <= x_fin; x += paso) {
        // Evitar logaritmo y raíz cuadrada de números no válidos
        double log_x = (x > 0) ? log(x) : NAN;
        double sqrt_x = (x >= 0) ? sqrt(x) : NAN;

        printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x, exp(x), log_x, sin(x), cos(x), sqrt_x);
    }

    return 0;
}
