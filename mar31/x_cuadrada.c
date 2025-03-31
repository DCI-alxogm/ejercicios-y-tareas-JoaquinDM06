#include <stdio.h>

int main() {
    int x, x_final, incremento;

    printf("Ingrese el valor inicial: ");
    scanf("%d", &x);
    printf("Ingrese el valor final: ");
    scanf("%d", &x_final);
    printf("Ingrese el incremento: ");
    scanf("%d", &incremento);

    do {
        printf("x = %d, x^2 = %d\n", x, x * x);
        x += incremento;
    } while (x <= x_final);

    return 0;
}
