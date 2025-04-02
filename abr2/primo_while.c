#include <stdio.h>
#include <stdlib.h>

int esPrimo(int num) {
	if (num <= 1) return 0;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main() {
	int inicio, fin;
	int primos[100];
	int cantidadPrimos = 0;

	printf("Introduce el inicio del intervalo: ");
	scanf("%d", &inicio);
	printf("Introduce el fin del intervalo: ");
	scanf("%d", &fin);

int i = inicio;
do {
    if (esPrimo(i)) {
        primos[cantidadPrimos++] = i;
    }
    i++;
} while (i <= fin);

if (cantidadPrimos > 100) {
    printf("El intervalo contiene más de 100 números primos. Introduce un nuevo intervalo.\n");
    return 1;
}

printf("Números primos en el intervalo [%d, %d]:\n", inicio, fin);
int j = 0;
do {
    printf("%d ", primos[j]);
    if ((j + 1) % 20 == 0) {
        printf("\n");
    }
    j++;
} while (j < cantidadPrimos);

printf("\n");
return 0;

}
