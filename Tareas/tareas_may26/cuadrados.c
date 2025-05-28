#include <stdio.h>

// Prototipos de funciones
void cuadrado_entrada_sin_salida(int x);
int cuadrado_salida_sin_entrada();

int main() {
    // Prueba de la primera función
    cuadrado_entrada_sin_salida(5);

    // Prueba de la segunda función
    int resultado = cuadrado_salida_sin_entrada();
    printf("El resultado del cuadrado es: %d\n", resultado);

    return 0;
}

// 1 Con argumento de entrada pero sin salida
void cuadrado_entrada_sin_salida(int x) {
    int resultado = x * x;
    printf("El cuadrado de %d es: %d\n", x, resultado);
}

// 2️ Con salida pero sin argumentos de entrada
int cuadrado_salida_sin_entrada() {
    int x;
    printf("Introduce un número para calcular su cuadrado: ");
    scanf("%d", &x);
    return x * x;
}

