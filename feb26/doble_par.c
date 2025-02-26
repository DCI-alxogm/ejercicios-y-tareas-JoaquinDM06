#include <stdio.h>
#include <string.h>
 
int main() {
    int numero, residuo;
    char respuesta[3]; // Arreglo para almacenar "si" o "no"
 
    do {
        // Leer número desde la entrada
        printf("Ingrese un número: ");
        scanf("%d", &numero);
 
        // Calcular el residuo de la división entre 2
        residuo = numero % 2;
 
        // Evaluar si el número es par o impar
        if (residuo == 0) {
            printf("El número es par\n");
        } else {
            printf("El número no es par\n");
        }
 
        // Preguntar si desea ingresar otro número
        printf("¿Quiere ingresar otro número? (si/no): ");
        scanf("%s", respuesta);
 
    } while (strcmp(respuesta, "si") == 0); // Repetir si la respuesta es "si"
 
    printf("Salida del programa.\n");
 
    return 0;
}
