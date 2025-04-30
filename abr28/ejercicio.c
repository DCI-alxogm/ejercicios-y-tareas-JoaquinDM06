#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int n_filas, m_columnas;
    float delta;

    // Entrada de datos por parte del usuario
    printf("Introduce el número de filas: ");
    scanf("%d", &n_filas);

    printf("Introduce el número de columnas: ");
    scanf("%d", &m_columnas);

    printf("Introduce la distancia entre puntos (delta): ");
    scanf("%f", &delta);

    // Declarar arreglos dinámicos
    float coordenadas_x[n_filas][m_columnas];
    float coordenadas_y[n_filas][m_columnas];

    // Llenar coordenadas
    for(i = 0; i < n_filas; i++) {
        for(j = 0; j < m_columnas; j++) {
            coordenadas_x[i][j] = j * delta;
            coordenadas_y[i][j] = i * delta;
        }
    }

    // Imprimir coordenadas
    printf("\nCoordenadas generadas:\n");
    for(i = 0; i < n_filas; i++) {
        for(j = 0; j < m_columnas; j++) {
            printf("(%.2f, %.2f)\t", coordenadas_x[i][j], coordenadas_y[i][j]);
        }
        printf("\n");
    }

    return 0;
}
