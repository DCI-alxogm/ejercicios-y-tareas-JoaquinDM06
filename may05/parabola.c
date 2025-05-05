#include <stdio.h>

int main() {
    FILE *fin, *fout;
    int n;
    double lim_inf, lim_sup, x, y, paso;

    // Abrimos el archivo de entrada
    fin = fopen("entrada.txt", "r");

    // Leemos los datos
    fscanf(fin, "%d %lf %lf", &n, &lim_inf, &lim_sup);
    fclose(fin);

    // Calculamos el paso
    paso = (lim_sup - lim_inf) / (n - 1);

    // Abrimos el archivo de salida
    fout = fopen("parabola.txt","w");
    // Evaluamos y escribimos resultados
    for (int i = 0; i < n; i++) {
        x = lim_inf + i * paso;
        y = x * x + 1;
        fprintf(fout, "x = %.4f, f(x) = %.4f\n", x, y);
    }

    fclose(fout);
    printf("Resultados guardados en parabola.txt\n");

    return 0;
}
