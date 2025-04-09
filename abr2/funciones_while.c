#include <stdio.h>
#include <math.h>

int main() { double x_inicio, x_fin, paso, x;

// Solicitar datos al usuario
printf("Ingrese el valor inicial del intervalo: ");
scanf("%lf", &x_inicio);
printf("Ingrese el valor final del intervalo: ");
scanf("%lf", &x_fin);
printf("Ingrese el valor del espaciamiento: ");
scanf("%lf", &paso);

// Encabezado
printf("\n x \t exp(x) \t log(x) \t sin(x) \t cos(x) \t sqrt(x)\n");

// Inicializar x
x = x_inicio;

// Evaluar las funciones en el intervalo dado con do...while
do {
    // Evitar logaritmo y raíz cuadrada de números no válidos
    double log_x = (x > 0) ? log(x) : NAN;
    double sqrt_x = (x >= 0) ? sqrt(x) : NAN;

    printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x, exp(x), log_x, sin(x), cos(x), sqrt_x);

    x += paso;
} while (x <= x_fin);

return 0;

}
