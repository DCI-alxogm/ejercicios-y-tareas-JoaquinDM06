#include <stdio.h>
#include <stdlib.h>

int main() {
    // PRIMERA PARTE: Arreglo estático ===
    int arr[6];
    int *ptr1 = arr;
    int suma1 = 0;

    printf("Parte 1: Suma con arreglo estático \n");
    for (int i = 0; i < 6; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", ptr1 + i);  // ptr1 + i es igual a &arr[i]
    }

    for (int i = 0; i < 6; i++) {
        suma1 += *(ptr1 + i);   // suma los valores usando apuntador
    }

    printf("La suma de los 6 números es: %d\n\n", suma1);

    // SEGUNDA PARTE: Memoria dinámica con 6 números ===
    int *ptr2;
    int suma2 = 0;

    // Reservar memoria para 6 enteros
    ptr2 = (int *)malloc(6 * sizeof(int));
    if (ptr2 == NULL) {
        printf("Error: no se pudo reservar memoria.\n");
        return 1;
    }

    printf("Parte 2: Suma y direcciones con memoria dinámica \n");
    for (int i = 0; i < 6; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", ptr2 + i);
    }

    // Mostrar dirección y valor
    printf("\nDirecciones y valores ingresados:\n");
    for (int i = 0; i < 6; i++) {
        printf("%p \t: %d\n", (ptr2 + i), *(ptr2 + i));
    }

    // Calcular la suma
    for (int i = 0; i < 6; i++) {
        suma2 += *(ptr2 + i);
    }

    printf("\nLa suma de los 6 números es: %d\n", suma2);

    // Liberar memoria
    free(ptr2);

    return 0;
}

