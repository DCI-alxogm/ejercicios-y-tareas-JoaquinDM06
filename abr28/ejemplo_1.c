#include <stdio.h>
#include <stdlib.h>

int main() {
    int n_filas = 3, m_cols = 3;
    float array_2d[3][3];  // Declarar el array antes de usarlo

    // Inicializar el arreglo en 0.0
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < m_cols; j++) {
            array_2d[i][j] = 0.0;
        }
    }

    // Leer datos para el arreglo
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < m_cols; j++) {
            scanf("%f", &array_2d[i][j]);
        }
    }

    // Imprimir el arreglo
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < m_cols; j++) {
            printf("%f\t", array_2d[i][j]);
        }
        printf("\n"); // Salto de línea después de cada fila
    }

    return 0;
}
