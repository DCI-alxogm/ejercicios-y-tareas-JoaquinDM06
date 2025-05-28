#include <stdio.h>
#include <math.h>

// Prototipos de funciones
void holaMundo();
void convertirCelsiusAFahrenheit(float celsius);
void coordenadasCilindricas(float* r, float* theta, float* z);
void minimosCuadrados(float x[], float y[], int n, float* m, float* b);

int main() {
    // 1. Hola mundo
    printf("Ejercicio 1: Hola Mundo\n");
    holaMundo();

    // 2. Conversión de °C a °F
    printf("Ejercicio 2: Conversión de temperatura\n");
    float c;
    printf("Ingresa temperatura en °C: ");
    scanf("%f", &c);
    convertirCelsiusAFahrenheit(c);

    // 3. Coordenadas cilíndricas
    float r, theta, z;
    coordenadasCilindricas(&r, &theta, &z);
    printf("Coordenadas cilíndricas: r = %.2f, θ = %.2f rad, z = %.2f\n", r, theta, z);

    // 4. Mínimos cuadrados
    printf("Ejercicio 4: Ajuste por mínimos cuadrados\n");
    int n;
    printf("¿Cuántos puntos vas a ingresar?: ");
    scanf("%d", &n);

    float x[n], y[n];

    for (int i = 0; i < n; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    float m, b;
    minimosCuadrados(x, y, n, &m, &b);
    printf("Recta ajustada: y = %.2fx + %.2f\n", m, b);

    return 0;
}

// ---------------------- FUNCIONES ----------------------

void holaMundo() {
    printf("Hola, mundo!\n");
}

void convertirCelsiusAFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);
}

void coordenadasCilindricas(float* r, float* theta, float* z) {
    float x, y;
    printf("Conversión de coordenadas cartesianas a cilíndricas\n");
    printf("Ingresa coordenada x: ");
    scanf("%f", &x);
    printf("Ingresa coordenada y: ");
    scanf("%f", &y);
    printf("Ingresa coordenada z: ");
    scanf("%f", z);  // z se almacena directamente

    *r = sqrt(x * x + y * y);
    *theta = atan2(y, x);
}

void minimosCuadrados(float x[], float y[], int n, float* m, float* b) {
    float sumaX = 0, sumaY = 0, sumaXY = 0, sumaX2 = 0;

    for (int i = 0; i < n; i++) {
        sumaX += x[i];
        sumaY += y[i];
        sumaXY += x[i] * y[i];
        sumaX2 += x[i] * x[i];
    }

    *m = (n * sumaXY - sumaX * sumaY) / (n * sumaX2 - sumaX * sumaX);
    *b = (sumaY - (*m) * sumaX) / n;
}
