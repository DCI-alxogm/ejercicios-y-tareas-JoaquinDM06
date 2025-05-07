#include <stdio.h>

int main() {
    FILE *fin, *fout;
    int n;
    double lim_inf, lim_sup, paso;

    // Abrimos el archivo de entrada
    fin = fopen("entrada.txt", "r");

    // Leemos los datos
    fscanf(fin, "%d %lf %lf", &n, &lim_inf, &lim_sup);
    fclose(fin);

    // Calculamos el paso
    paso = (lim_sup - lim_inf) / (n - 1);

    // Arreglos para almacenar x y f(x)
    double x[n], y[n];

    // Almacenamos los valores de x y f(x) en los arreglos
    for (int i = 0; i < n; i++) {
        x[i] = lim_inf + i * paso;
        y[i] = x[i] * x[i] + 1;
    }

    // Abrimos el archivo de salida
    fout = fopen("parabola.txt", "w");

    // Escribimos los resultados en el archivo
    for (int i = 0; i < n; i++) {
        fprintf(fout, "x = %.4f, f(x) = %.4f\n", x[i], y[i]);
    }

    fclose(fout);
    printf("Resultados guardados en parabola.txt\n");

    return 0;
}
