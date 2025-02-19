/*
Ejemplo feb19
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float TC, TK;
	//Cuerpo del programa
	printf("¿a cuantos grados estas ahora? \n");
	scanf("%f", &TC);
	TK=TC + 273.15;
	printf("Tu temperatura es %f F \n",TK);
	exit(0);
}
