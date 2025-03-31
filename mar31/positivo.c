#include <stdio.h>

int main() {

int num;
	 do {
	printf("ingrese un numero positivo\n");
	scanf("%d", &num);

	} while (num <= 0);
	printf("numero ingresado; %d\n", num);

return 0;
}

