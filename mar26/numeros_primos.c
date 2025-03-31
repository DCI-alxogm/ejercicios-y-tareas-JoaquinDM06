 #include <stdio.h>
#include <stdlib.h>

// Función para verificar si un número es primo
int esPrimo(int num) {
    if (num <= 1) return 0;  // 0 representa falso
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // 0 representa falso
    }
    return 1;  // 1 representa verdadero
}

int main() {
    int inicio, fin;
    int primos[100]; // Asumiendo que no habrá más de 100 primos en el intervalo
    int cantidadPrimos = 0;

    // Solicitar al usuario el intervalo
    printf("Introduce el inicio del intervalo: ");
    scanf("%d", &inicio);
    printf("Introduce el fin del intervalo: ");
    scanf("%d", &fin);

    // Encontrar números primos en el intervalo
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {  // Si esPrimo devuelve 1 (verdadero)
            primos[cantidadPrimos++] = i;
        }
    }

    // Verificar si hay más de 100 números primos
    if (cantidadPrimos > 100) {
        printf("El intervalo contiene más de 100 números primos. Introduce un nuevo intervalo.\n");
        return 1; // Salir con error
    }

    // Imprimir números primos en renglones de 20 números máximo
    printf("Números primos en el intervalo [%d, %d]:\n", inicio, fin);
    for (int i = 0; i < cantidadPrimos; i++) {
        printf("%d ", primos[i]);
        if ((i + 1) % 20 == 0) {
            printf("\n"); // Nueva línea después de 20 números
        }
    }
    printf("\n");

    return 0; // Salir sin error
}
