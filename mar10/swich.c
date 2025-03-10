#include <stdio.h>

int main() {
    char op;
    float valor, resultado;

    printf("Selecciona una opción:\n");
    printf("'c' para convertir °C a K\n");
    printf("'k' para convertir K a °C\n");
    scanf(" %s", &op);

    printf("Ingresa el valor de temperatura: ");
    scanf("%f", &valor);

    switch(op) {
        case 'c':  // Convertir Celsius a Kelvin
            resultado = valor + 273.15;
            printf("%.2f°C es igual a %.2fK\n", valor, resultado);
            break;
        case 'k':  // Convertir Kelvin a Celsius
            resultado = valor - 273.15;
            printf("%.2fK es igual a %.2f°C\n", valor, resultado);
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    printf("Fin\n");
    return 0;
}
