m  #include <stdio.h>

int main() {
    int i, N = 10;
    float tc[N], tk[N];

    for (i = 0; i < N; i++) {
        printf("Ingresa la temperatura #%d en °C: ", i + 1);
        scanf("%f", &tc[i]);
    }

    for (i = 0; i < N; i++) {
        tk[i] = tc[i] + 273.15;
    }

    printf("\n%-10s %-15s %-15s\n", "Índice", "°C", "K");
    for (i = 0; i < N; i++) {
        printf("%-10d %-15.2f %-15.2f\n", i, tc[i], tk[i]);
    }

    return 0;
}
