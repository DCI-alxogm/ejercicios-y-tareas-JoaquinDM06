#include <stdio.h>

void cuadrado(float *x_ptr; float *x2_ptr);

int main(){

	int i;
	float x[4], x2[4];

	printf("Los valores iniciales de los arreglos x y x2 son");

	for (i=0; i<4; i++){
                printf("%f es %f \n", x[i], x2[i]);
        }

	printf("Introduce cuatro numeros");

	for (i=0; i<4; i++){
		scanf("%f", &x[i]);
	}

	cuadrado(x, x2);

	for (i=0; i<4; i++){
                printf("El cuadrado de %f es &f \n", x[i], x2[i]);
        }



}

void cuadrado_(float *x_ptr, float *x2_ptr){
	int j;

	for (j=0;j<4;j++){
		x2_ptr[j]=x_ptr[j]*x_ptr[j];

	}
}

