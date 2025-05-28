#include <stdio.h>

void cuadrado();
int main(){

	cuadrado();
	return (0);
}

void cuadrado(){
	float x, x2;
	printf("Introduce un numero\n");
	scanf("%f", &x);

	x2=x*x;

	printf("El cuadrado de %f es %f\n", x, x2);
}
